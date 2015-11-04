#include <stdio.h>
void adder(char[], char[]);
int main(){
	char num1[100], num2[100];
	printf("Enter number1\n");
	scanf("%s", num1);
	printf("Enter number2\n");
	scanf("%s", num2);
	adder(num1, num2);
	_getch();
	return 0;
}
void adder(char num1[], char num2[]){
	int carry = 0;
	int len1 = 0, len2 = 0, temp;
	int i = 0;
	while (num1[i++] != '\0')
		len1++;
	i = 0;
	while (num2[i++] != '\0')
		len2++;
	char result[100];
	int j = len2 - 1;
	i = len1 - 1;
	int k = 0;
	int num;
	if (len1 >= len2){
		while (i >= 0){
			if (j >= 0){
				num = ((num1[i--] - 48) + (num2[j--] - 48)) + carry;
				carry = 0;
				if (num < 10){
					result[k++] = num + 48;
				}
				else{
					result[k++] = (num % 10) + 48;
					carry = num / 10;
				}
			}
			else{
				num = (num1[i--] - 48) + carry;
				carry = 0;
				if (num < 10){
					result[k++] = num + 48;
				}
				else{
					result[k++] = (num % 10) + 48;
					carry = num / 10;
				}
			}
		}
	}
	else{
		while (j >= 0){
			if (i >= 0){
				num = ((num1[i--] - 48) + (num2[j--] - 48)) + carry;
				carry = 0;
				if (num < 10){
					result[k++] = num + 48;
				}
				else{
					result[k++] = (num % 10) + 48;
					carry = num / 10;
				}
			}
			else{
				num = (num2[j--] - 48) + carry;
				carry = 0;
				if (num < 10){
					result[k++] = num + 48;
				}
				else{
					result[k++] = (num % 10) + 48;
					carry = num / 10;
				}
			}
		}
	}
	result[k] = '\0';
	printf("Sum is\n");
	for (i = k - 1; i >= 0; i--){
		printf("%c", result[i]);
	}
	return;
}