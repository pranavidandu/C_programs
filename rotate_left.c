#include <stdio.h>
void rotate_left(int[], int, int);
//void rotate_left1(int[], int, int);
int main(){
	int no_of_elements;
	printf("Enter  size of array\n");
	scanf("%d", &no_of_elements);
	int *given_array = (int*)malloc(sizeof(int)* no_of_elements);
	printf("Enter elements\n");
	for (int i = 0; i < no_of_elements; i++)
		scanf("%d", &given_array[i]);
	int turns;
	printf("Enter number of rotations\n");
	scanf("%d", &turns);
	if (turns > 0)
	rotate_left(given_array, no_of_elements, turns);
	//rotate_left1(given_array, no_of_elements, turns);
	else{
		printf("Cannot rotate\n");
	}
	_getch();
	return 0;
}
void rotate_left(int given_array[], int no_of_elements, int turns){
	int pos;
	if (turns < no_of_elements)
		pos = no_of_elements - turns;
	else
		pos = turns - no_of_elements;
	printf("pos:%d\n", pos);
	int temp = 0;
	if (turns % no_of_elements != 0){
		while (pos > 0){
			temp = given_array[no_of_elements - 1];
			for (int i = no_of_elements - 1; i > 0; i--)
				given_array[i] = given_array[i - 1];
			given_array[0] = temp;
			pos--;
		}
	}
	for (int i = 0; i < no_of_elements; i++)
		printf("%d ", given_array[i]);
	printf("\n");
	return;
}