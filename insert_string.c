#include <stdio.h>
void insert_string(char[], char[], int, int, int);
int main(){
		int size_of_string1;
		printf("Enter  size of string1\n");
		scanf("%d", &size_of_string1);
		char *given_string1 = (char*)malloc(sizeof(int)* size_of_string1);
		printf("Enter string1\n");
		scanf("%s", given_string1);
		int size_of_string2;
		printf("Enter  size of string2\n");
		scanf("%d", &size_of_string2);
		char *given_string2 = (char*)malloc(sizeof(int)* size_of_string2);
		int length = size_of_string1 + size_of_string2;
		printf("Enter string2\n");
		scanf("%s", given_string2);
		int pos;
		printf("Enter position to insert\n");
		scanf("%d", &pos);
		if (pos >= 0 && pos < size_of_string1){
			insert_string(given_string1, given_string2, size_of_string1, size_of_string2, pos);
		}
		else{
			printf("%d index does not exists\n", pos);
		}
		_getch();
		return 0;
}
void insert_string(char given_string1[], char given_string2[], int size_of_string1, int size_of_string2, int pos){
	int index = size_of_string2 + pos;
	int j = size_of_string1 - 1;
	for (int i = size_of_string1 + size_of_string2 - 1; i >= index; i--){
		given_string1[i] = given_string1[j--];
	}
	for (int i = 0; i < size_of_string2; i++)
		given_string1[pos++] = given_string2[i];
	given_string1[size_of_string1 + size_of_string2] = '\0';
	printf("%s", given_string1);
	return;
}