#include <stdio.h>
int divisile(char[]);
int main(){
	char given_number[10000];
	printf("Enter a number\n");
	scanf("%s", given_number);
	int result = divisile(given_number);
	if (result == 1)
		printf("Divisible by 11\n");
	else
		printf("Not divisible by 11\n");
	_getch();
	return 0;
}
int divisile(char given_number[]){
	int i = 0, len = 0;
	while (given_number[i++] != '\0')
		len++;
	int even_sum = 0;
	int odd_sum = 0;
	for (i = 0; i < len; i++){
		if (i % 2 == 0)
			even_sum += given_number[i] - 48;
		else
			odd_sum += given_number[i] - 48;
	}
	int sum = even_sum - odd_sum;
	if (sum == 0 || sum == 11)
		return 1;
	else
		return 0;
}