#include <stdio.h>
void fib_base(int);
int main(){
	int num;
	printf("Enter number\n");
	scanf("%d", &num);
	fib_base(num);
	_getch();
	return 0;
}
void fib_base(int num){
	int fib_array[20];
	//int result[10];
	int f1 = 1, f2 = 1;
	int f3 = 0;
	int sum = 0;
	int i = 0;
	int j = 0;
	fib_array[i++] = f1;
	fib_array[i++] = f2;
	while (1){
		f3 = f1 + f2;
		fib_array[i] = f3;
		f1 = f2;
		f2 = f3;
		sum += fib_array[j];
		if (sum >= num)
		{
			sum = f3;
			fib_array[j] = 1;
			break;
		}
		i++;
		j++;
	}
	i = j;
	while (j >= 0){
		if (sum + fib_array[j - 1] <= num){
			sum += fib_array[j - 1];
			fib_array[j - 1] = 1;
		}
		else
			fib_array[j - 1] = 0;

		j--;
	}
	for (j = 0; j < i; j++)
		printf("%d ", fib_array[j]);
	return;
}