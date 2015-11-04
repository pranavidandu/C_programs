#include <stdio.h>
int product(int, int);
int main(){
	int num1;
	int num2;
	printf("Enter number1\n");
	scanf("%d", &num1);
	printf("Enter number2\n");
	scanf("%d", &num2);
	int result = product(num1, num2);
	printf("Product is %d\n", result);
	_getch();
	return 0;
}
int product(int num1, int num2){
	int sum = 0;
	while (num2 >= 1){
		if (num2 % 2 != 0){
			sum -= -(num1);
		}
		num1 = num1 << 1;
		num2 = num2 >> 1;
	}
	return sum;
}