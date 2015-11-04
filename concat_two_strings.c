#include <stdio.h>
void prepend(char[], char[], int, int);
void append(char[], char[], int, int);
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
	//*given_string1 = (char*)malloc(sizeof(int)* length);
	printf("Enter string2\n");
	scanf("%s", given_string2);
	prepend(given_string1, given_string2,size_of_string1, size_of_string2);
	append(given_string1, given_string2, size_of_string1, size_of_string2);
	_getch();
	return 0;
}
void prepend(char given_string1[], char given_string2[], int size_of_string1, int size_of_string2){
	int j = 0;
	for (int i = size_of_string2; i < size_of_string1 + size_of_string2; i++)
		given_string2[i] = given_string1[j++];
	given_string2[size_of_string1 + size_of_string2] = '\0';
	printf(" Prepend: %s\n", given_string2);
	return;
}
void append(char given_string1[], char given_string2[], int size_of_string1, int size_of_string2){
	int j = 0;
	for (int i = size_of_string1; i < size_of_string1 + size_of_string2; i++)
		given_string1[i] = given_string2[j++];
	given_string1[size_of_string1 + size_of_string2] = '\0';
	printf("Append: %s", given_string1);
	return;
}