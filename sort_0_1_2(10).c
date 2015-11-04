#include <stdio.h>
void sort_array(int[], int);
int main(){
	int no_of_elements;
	printf("Enter  size of array\n");
	scanf("%d", &no_of_elements);
	int *given_array = (int*)malloc(sizeof(int)* no_of_elements);
	printf("Enter element 0 or 1 or 2\n");
	int i;
	for (i = 0; i < no_of_elements; i++){
		scanf("%d", &given_array[i]);
	}
	sort_array(given_array, no_of_elements);
	for (i = 0; i < no_of_elements; i++)
		printf("%d ", given_array[i]);
	_getch();
	return 0;
}
void sort_array(int given_array[], int no_of_elements){
	int count0 = 0;
	int count1 = 0;
	int count2 = 0;
	int i = 0, j = 0, k = 0;
	for (i = 0; i < no_of_elements; i++){
		if (given_array[i] == 0)
			count0++;
		else if (given_array[i] == 1)
			count1++;
		else
			count2++;
	}
	for (i = 0; i < count0; i++)
		given_array[i] = 0;
	for (j = i; j < count1; j++)
		given_array[j] = 1;
	for (k = j; k < no_of_elements; k++)
		given_array[k] = 2;
	return;
}