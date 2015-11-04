#include <stdio.h>
void common_chars(char[], char[]);
int main(){
	char given_array1[10] = "aaabccfgt";
	char given_array2[10] = "abcat";
	common_chars(given_array1, given_array2);
	_getch();
	return 0;
}
void common_chars(char given_array1[10], char given_array2[10]){
	int common_characters[26] = { 0 };
	int repeat_characters[26] = { 0 };
	for (int i = 0; given_array1[i] != '\0'; i++){	
		repeat_characters[given_array1[i] - 97]++;
		if (repeat_characters[given_array1[i] - 97] > 1)
			continue;
		for (int j = 0; given_array2[j] != '\0'; j++){
			if (given_array1[i] == given_array2[j]){
				printf("i is %d\n", i);
				common_characters[given_array1[i] - 97]++;
			}
		}
	}
	for (int i = 0; i < 26; i++)
		printf("%d", common_characters[i]);
	for (int i = 0; i < 26; i++){
		if (common_characters[i] > 0){
			printf("%c", 97 + i);
			
		}
	}
	return;
}