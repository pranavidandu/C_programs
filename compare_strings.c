#include <stdio.h>
#include <stdlib.h>
void large(char[], char[]);

int main(){
	char str1[10];
	char str2[10];
	printf("Enter first number\n");
	scanf("%s", &str1);
	printf("Enter second number\n");
	scanf("%s", &str2);
	large(str1, str2);
	_getch();
	return 0;
}
void large(char str1[], char str2[]){
	int len1 = 0, len2 = 0;
	int i = 0, j = 0;
	while (str1[i] != '\0'){
		len1++;
		i++;
	}
	while (str2[j] != '\0'){
		len2++;
		j++;
	}
	if (len1 != len2){
		if (str1[0] == '-' && str2[0] == '-'){
			if (len1 > len2)
				printf("%s is greater\n", str2);
			else
				printf("%s is greater\n", str1);
		}
		else if (str1[0] == '-' && str2[0] != '-')
			printf("%s is greater\n", str2);
		else if (str1[0] != '-' && str2[0] == '-')
			printf("%s is greater\n", str1);
		else{
			if (len1 > len2)
				printf("%s is greater\n", str1);
			else
				printf("%s is greater\n", str2);
		}
	}
      
	
	else{
		for (int k = 0; k < len1; k++){
			if (str1[0] == '-' && str2[0] == '-'){
				if (str1[k] > str2[k]){
					printf("%s is greater", str2);
					break;
				}
				if (str1[k] < str2[k]){
					printf("%s is greater", str1);
					break;
				}
			}
			else {
				if (str1[k] > str2[k]){
					printf("%s is greater", str1);
					break;
				}
				if (str1[k] < str2[k]){
					printf("%s is greater", str2);
					break;
				}
			}
		}
	}
	return;
}