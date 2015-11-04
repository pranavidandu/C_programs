#include <stdio.h>
#include <stdio.h>
void smallestsum(int[], int);
int main(){
	int no_of_elements;
	printf("Enter  size of array\n");
	scanf("%d", &no_of_elements);
	int *given_array = (int*)malloc(sizeof(int)* no_of_elements);
	printf("Enter elements\n");
	for (int i = 0; i < no_of_elements; i++){
		scanf("%d", &given_array[i]);
	}
	smallestsum(given_array, no_of_elements);
	_getch();
	return 0;

}
void smallestsum(int given_array[], int no_of_elements){
	int smallest = given_array[0];
	int second_smallest = given_array[1];
	int temp;
	if (smallest > second_smallest){
		temp = smallest;
		smallest = second_smallest;
		second_smallest = temp;
	}
	int temp2;
	for (int i = 2; i < no_of_elements; i++){
		if (given_array[i] < smallest){
			temp2 = smallest;
			smallest = given_array[i];
			second_smallest = temp2;
		}
		else if (given_array[i] < second_smallest){
			second_smallest = given_array[i];
		}

	}
	int sum = 0;
	printf("%d %d", smallest, second_smallest);
	sum = smallest + second_smallest;
	printf("Sum: %d", sum);
	return;
}