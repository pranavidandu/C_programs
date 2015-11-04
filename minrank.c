#include <stdio.h>
int min_rank(int [], int, int, int);
int fact(int);
int main(){
	unsigned int num;
	printf("Enter a number\n");
	scanf("%d", &num);
	int given_array[100];
	int i = 0;
	int temp = num;
	while (temp > 0){
		given_array[i++] = temp % 10;
		temp /= 10;
	}
	for (int j = 0; j < i; j++)
		printf("%d ", given_array[j]);
	printf("\n");
	given_array[i] = '\0';
	int minrank =  min_rank(given_array, i, i - 1, 0);
	printf("Min Rank is %d\n", minrank);
	_getch();
	return 0;
}
int min_rank(int given_array[], int no_of_elements, int count, int sum){
	if (count == 0)
		return sum;
	int  max = 0, result;
	for (int i = count - 1; i >= 0; i--){
		if (given_array[count] > given_array[i])
			max++;
	}
	if (max > 0){
		result = max * fact(count);
		//printf("Result is %d\n", result);
		sum += result;
	}
	count--;
	min_rank(given_array, no_of_elements, count, sum);
}
/*void min_rank(int num){
	int count = 0;
	int temp = num;
	int given_array[100];
	int i = 0;
	while (temp > 0){
		given_array[i++] = temp % 10;
		temp /= 10;
		count++;
	}
	int count_min = 0;
	int max = given_array[count - 1];
	for (int i = 0; i < count - 1; i++){
		if (given_array[i] < max)
			count_min++;
	}
		
	return;
}*/
int fact(int num){
	int fact = 1;
	//printf("num is %d\n", num);
	for (int i = num; i > 1; i--){
		fact *= i;
	}
	//printf("Fact is %d\n", fact);
	return fact;
}
/*void min_rank(int num){
	int count = 0;
	int temp = num;
	int given_array[100];
	int i = 0;
	while (temp > 0){
		given_array[i++] = temp % 10;
		temp /= 10;
		count++;
	}
	int count_min = 0;
	int max = given_array[count - 1];
	
}*/
