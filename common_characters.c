#include <stdio.h>
void common_characters(char[], char[]);
int main(){
	char given_array1[20];
	printf("Enter first string\n");
	scanf("%s", given_array1);
	char given_array2[20];
	printf("Enter second string\n");
	scanf("%s", given_array2);
	common_characters(given_array1, given_array2);
	return 0;
}
void common_characters(char given_array1[10], char given_array2[10]){
	int common_characters[26] = { 0 };
	int i, flag = 0;
	for(i = 0; given_array1[i] != '\0'; i++){
		if(common_characters[given_array1[i] - 97] == 1)
			continue;
		common_characters[given_array1[i] - 97]++;
	}
	for(i = 0; given_array2[i] != '\0'; i++){
		if(common_characters[given_array2[i] - 97] == 2 || common_characters[given_array2[i] - 97] == 0)
			continue;
		common_characters[given_array2[i] - 97]++;
	}	
	printf("Common Characters:");
	for(i = 0; i < 26; i++){
		if(common_characters[i] == 2){
			flag = 1;			
			printf(" %c", 97 + i);}
	}
	if(flag == 0)
		printf("NONE");
	printf("\n");
	return;}
