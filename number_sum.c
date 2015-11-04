#include <stdio.h>
void sum(char[], char[]);
int main(){
	char num1[100];
	char num2[100];
	printf("Enter number1\n");
	scanf("%s", num1);
	printf("Enter number2\n");
	scanf("%s", num2);
	sum(num1, num2);
	_getch();
	return 0;
}
//function for left addition of numbers of equal length
void sum(char num1[], char num2[]){
	char result[100];
	int i = 0, len1 = 0;
	while (num1[len1++] != '\0');
	int k = 0;
	int j = 0;
	int carry = 0;
	int val = 0;
	while (i < len1 - 1){
		val = (num1[i] - 48) + (num2[i] - 48) + carry;
		if (val < 10){
			result[k++] = val + 48;
			carry = 0;
		}
		else{
			result[k++] = (val % 10) + 48;
			carry = val / 10;
			j = k - 2;
			while (carry != 0){
				val = (result[j] - 48) + carry;
				if (val < 10){
					result[j--] = val + 48;
					carry = 0;
				}
				else{
					result[j--] = (val % 10) + 48;
					carry = val / 10;
				}
			}
		}
		i++;
	}
	result[i] = '\0';
	for (int m = 0; m < i; m++)
		printf("%c ", result[m]);
	return;
}