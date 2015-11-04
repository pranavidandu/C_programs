#include <stdio.h>
int max_min_numbers(int[], int);
int main(){
	int no_of_elements;
	printf("Enter  size of array\n");
	scanf("%d", &no_of_elements);
	int *given_array = (int*)malloc(sizeof(int)* no_of_elements);
	printf("Enter elements\n");
	for (int i = 0; i < no_of_elements; i++){
		scanf("%d", &given_array[i]);
	}
	int large = max_min_numbers(given_array, no_of_elements);
	printf("Largest element:%d\n", large);;
	_getch();
	return 0;
}
int max_min_numbers(int given_array[], int no_of_elements){
	int small = given_array[0];
	int large = given_array[0];
	int i;
	for (i = 1; i < no_of_elements; i++){
		if (given_array[i] < small){
			small = given_array[i];
		}
		if (given_array[i] > large){
			large = given_array[i];
		}
	}
	printf("Smallest element:%d\n", small);
	return large;
}