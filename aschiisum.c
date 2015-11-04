#include <stdio.h>
#include <stdlib.h>
void sum(char[]);
int main(){
	char given_array[10] = "abc";
	sum(given_array);
	_getch();
	return 0;
}
void sum(char given_array[10]){
	int sum_of_ascii = 0;
	for (int i = 0; given_array[i] != '\0'; i++){
		sum_of_ascii += given_array[i];
	}
	printf("%d", sum_of_ascii);
	return;
}