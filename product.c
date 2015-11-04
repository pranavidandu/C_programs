#include <stdio.h>
//void product1(int[], int, int[]);
//void product2(int[], int, int[]);
void product3(int[], int, int[]);
int main(){
	int given_array1[100];
	int given_array2[100];
	int no_of_elements;
	printf("Enter no of elements\n");
	scanf("%d", &no_of_elements);
	printf("Enter elements\n");
	for (int i = 0; i < no_of_elements; i++)
		scanf("%d", &given_array1[i]);
	//product1(given_array1, no_of_elements, given_array2);
	//for (int i = 0; i < no_of_elements; i++)
		//printf("%d ", given_array2[i]);
	printf("\n");
	//product2(given_array1, no_of_elements, given_array2);
	//for (int i = 0; i < no_of_elements; i++)
		//printf("%d ", given_array2[i]);
	printf("\n");
	product3(given_array1, no_of_elements, given_array2);
	for (int i = 0; i < no_of_elements; i++)
		printf("%d ", given_array2[i]);
	_getch();
	return 0;
}
void product1(int given_array1[], int no_of_elements, int given_array2[]){
	printf("im in product\n");
	int product = 1;
	for (int i = 0; i < no_of_elements; i++){
		for (int j = 0; j < no_of_elements; j++)
		{
			if (given_array1[i] != given_array1[j])
				product *= given_array1[j];
		}
		given_array2[i] = product;
		product = 1;
	}
}
void product2(int given_array1[], int no_of_elements, int given_array2[]){
	int product = 1;
	for (int i = 0; i < no_of_elements; i++)
	{
		if (given_array1[i] != 0)
			product *= given_array1[i];
	}
	for (int i = 0; i < no_of_elements; i++)
	{
		if (given_array1[i] != 0)
			given_array2[i] = product / given_array1[i];
	}
	return;
}

void product3(int given_array1[], int no_of_elements, int given_array2[]){
	int product = 1;
	printf("i in 3\n");
	for (int i = no_of_elements - 1; i >= 0; i--){
		product = product * given_array1[i];
		given_array2[i] = product;
	}
	product = 1;
	for (int i = 0; i < no_of_elements; i++)
		printf("%d ", given_array2[i]);
	printf("\n");
	for (int i = 0; i < no_of_elements - 1; i++){
		product = product * given_array1[i];
		given_array1[i] = product;
	}
	for (int i = 0; i < no_of_elements; i++)
		printf("%d ", given_array1[i]);
	printf("\n");
	int i = 0;
	int j = 2;
	given_array2[0] = given_array2[1];
	while (j <= no_of_elements){
		given_array2[j - 1] = given_array1[i++] * given_array2[j++];
	}
	printf("%d %d\n", i, j);
	given_array2[j - 2] = given_array1[i - 1];
	return;
}