#include <stdio.h>
void form_Q(char[], int, int);
int divisile(char[], int);
int main(){
	char P[100];
	printf("Enter P\n");
	scanf("%s", P);
	int k;
	printf("Enter number of times P has to be repeated\n");
	scanf("%d", &k);
	int i = 0, len = 0;
	while (P[i++] != '\0')
		len++;
	form_Q(P, k, len);
	int result = divisile(P, len);
	if (result == 1)
		printf("Divisible by 11\n");
	else
		printf("Not divisible by 11\n");
	_getch();
	return 0;
}
void form_Q(char P[], int k, int len){
	//int Q[100];
	int i = 0, j = len;
	len = len * k;
	while (j < len){
		P[j++] = P[i++];
	}
	P[j] = '\0';
	//printf("P is %s\n", P);
	return;
}
int divisile(char given_number[], int len){
	int i = 0;
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