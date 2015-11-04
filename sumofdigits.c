#include <stdio.h>
#include <stdlib.h>
int sum(int);
int main(){
	int num;
	printf("Enter a number");
	scanf("%d", &num);
	int sumofdigit = sum(num);
	printf("%d", sumofdigit);
	_getch();
	return 0;
}
int sum(int num){
	int rem;
	int sum = 0;
	while (num > 0)
	{
		rem = num % 10;
		sum += rem;
		num = num / 10;
	}
	return sum;
}