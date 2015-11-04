#include <stdio.h>
int divisile_1(char[]);
int divisile_2(char[]);
int main(){
	char given_number[10000];
	printf("Enter a number\n");
	scanf("%s", given_number);
	int result = divisile_1(given_number);
	if (result == 1)
		printf("Divisible by 3\n");
	else
		printf("Not divisible by 3\n");
	 result = divisile_2(given_number);
	if (result == 1)
		printf("Divisible by 3\n");
	else
		printf("Not divisible by 3\n");
	_getch();
	return 0;
}
int divisile_1(char given_number[]){
	int i = 0, len = 0;
	while (given_number[i++] != '\0')
		len++;
	i = len - 1;
	int sum = 0;
	while (i >= 0){
		sum += (given_number[i--] - 48);
	}
	if (sum % 3 == 0)
		return 1;
	else
		return 0;
}
int divisile_2(char given_number[]){
	int i = 0, len = 0;
	while (given_number[i++] != '\0')
		len++;
	int first_sum = 0;
	int second_sum = 0;
	for (i = 0; i < len; i++){
		if (given_number[i] == '2' || given_number[i] == '5' || given_number[i] == '8')
			first_sum++;
		else if (given_number[i] == '1' || given_number[i] == '4' || given_number[i] == '7')
			second_sum++;
	}
	int sum = first_sum - second_sum;
	if (sum == 0)
		return 1;
	else
		return 0;
}