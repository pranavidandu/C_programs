#include <stdio.h>
void max_neg_chain(int[], int);
int main(){
	int no_of_elements;
	printf("Enter  size of array\n");
	scanf("%d", &no_of_elements);
	int *given_array = (int*)malloc(sizeof(int)* no_of_elements);
	printf("Enter elements\n");
	for (int i = 0; i < no_of_elements; i++){
		scanf("%d", &given_array[i]);
	}
	max_neg_chain(given_array, no_of_elements);
	_getch();
	return 0;
}
void max_neg_chain(int given_array[], int no_of_elements){
	int first_index = 0;
	int second_index;
	int temp = 0;
	int count = 0;
	int j;
	for (int i = 0; i < no_of_elements; i++){
		if (given_array[i] < 0){
			count++;
			if (count > temp){
				second_index = i;
				temp = count;
			}
		}
		else{
			count = 0;
		}
	}
	first_index = second_index - temp;
	for (int i = first_index + 1; i <= second_index; i++)
		printf("%d ", given_array[i]);
	printf("\ncount = %d", temp);
	return;
}