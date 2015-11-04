#include <stdio.h>
void base(int);
int power(int);
int main(){
	int num;
	printf("Enter number\n");
	scanf("%d", &num);
	base(num);
	_getch();
	return 0;
}
void base(int num){
	int array[10];
	int i = 0;
	int pow = 0;
	int len = 0;
	int tempnum = num;
	while (tempnum >= 1){
		array[i++] = tempnum % 2;
		tempnum = tempnum / 2;
		len++;
	}
	i =  0;
	int carry = 0;
	int rem = 0;
	int sum = 0;
	tempnum = num;
	while (sum <= tempnum){
		if (carry == 1){
			if (num >= 1)
				rem = num % 2;
			else
				rem = 0;
			if (carry == 1 && rem == 0){
				array[i] = 1;
				carry = 0;
			}
			else if (carry == 1 && rem == 1){
				array[i] = 0;
				carry = 1;
			}
		}
		if (pow % 2 != 0){
			if (array[i] == 1){
				carry = 1;
			}

		}
		if (array[i] == 1 && pow % 2 == 0)
		{
			sum += power(pow);
		}
		else if (array[i] == 1)
			sum -= power(pow);
		pow++;
		num = num / 2;
		i++;
	}
	int j = 0;
	for (j = i - 1; j >= 0; j--)
		printf("%d", array[j]);
	return;
}
int power(int pow){
	int result = 2;
	for (int i = 0; i < pow; i++)
		result *= 2;
	return result;
}