#include <stdio.h>
void kth_index(char[], int);
int main(){
	char given_array[20];
	printf("Enter a string\n");
	scanf("%s", given_array);
	int k;
	printf("Enter kth index to find\n");
	scanf("%d", &k);
		kth_index(given_array, k);
	_getch();
	return 0;
}
void kth_index(char given_array[], int k){
	int i = 0;
	int j = k;
	while (given_array[j] != '\0'){
		i++;
		j++;
	}
	//printf("i is %d\n", i);
	printf("Element at %d position from last is %c\n", k, given_array[i]);
	return;
}