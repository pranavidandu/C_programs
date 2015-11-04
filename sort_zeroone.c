#include <stdio.h>
void sort1(int[], int);
void sort2(int[], int);
void sort3(int[], int);
void sort4(int[], int);
int main(){
	int given_array[100];
	int no_of_elements;
	int i = 0;
	printf("Enter number of elements in array\n");
	scanf("%d", &no_of_elements);
	printf("Enter elements in array\n");
	for (i = 0; i < no_of_elements; i++)
		scanf("%d", &given_array[i]);
	sort1(given_array, no_of_elements);
	printf("Using bubble sort\n");
	for (i = 0; i < no_of_elements; i++)
		printf("%d ", given_array[i]);
	printf("\n");
	sort2(given_array, no_of_elements);
	for (i = 0; i < no_of_elements; i++)
		printf("%d ", given_array[i]);
	printf("\n");
	sort3(given_array, no_of_elements);
	for (i = 0; i < no_of_elements; i++)
		printf("%d ", given_array[i]);
	printf("\n");
	sort4(given_array, no_of_elements);
	for (i = 0; i < no_of_elements; i++)
		printf("%d ", given_array[i]);
	_getch();
	return 0;
}
void sort1(int given_array[], int no_of_elements){
	int temp;
	for (int i = 0; i < no_of_elements - 1; i++){
		for (int j = 0; j < no_of_elements - i - 1; j++){
			if (given_array[j] > given_array[j + 1]){
				temp = given_array[j + 1];
				given_array[j + 1] = given_array[j];
				given_array[j] = temp;
			}
		}
	}
}
void sort2(int given_array[], int no_of_elements){
	int count0 = 0;
	int i = 0, j =  0;
	for (i = 0; i < no_of_elements; i++){
		if (given_array[i] == 0)
			count0++;
	}
	for (i = 0; i < count0; i++)
		given_array[i] = 0;
	for (j = i; j < no_of_elements; j++)
		given_array[j] = 1;
	return;
}
void sort3(int given_array[], int no_of_elements){
	int i = 0;
	int sum = 0;
	for (i = 0; i < no_of_elements; i++){
		sum += given_array[i];
	}
	if (sum == 0)
		return;
	else
	{
		int position = no_of_elements - sum;
		for (i = 0; i < position; i++)
			given_array[i] = 0;
		for (i = position; i < no_of_elements; i++)
			given_array[i] = 1;
		return;
	}
}
void sort4(int given_array[], int no_of_elements){
	int i = 0, j = no_of_elements - 1;
	int temp;
	while (i < j){
		if (given_array[i] == 1 && given_array[j] == 0){
			temp = given_array[i];
			given_array[i] = given_array[j];
			given_array[j] = temp;
		}
		else if (given_array[i] == 1 && given_array[j] == 1)
			j--;
		else
			i++;
	}
}