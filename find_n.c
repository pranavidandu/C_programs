#include <stdio.h>
int find_n(int[]);
int pow(int);
int main(){
	int given_array[] = { 1, 2, 3, 5, 6, 10, 9, 0, 0, 0, 0, 0 };
	int val = find_n(given_array);
	printf("Array size %d\n", val);
	_getch();
	return 0;
}
int find_n(int array[]){
	int i = 1;
	int j = 0;
	while (array[i] != 0)
		i = power(++j) - 1;
	i = i / 2;
	while (1){
		if (array[i + 1] > array[i + 2]){
			return i;
		}
		i += 2;
	}
}
int power(int pow){
	int result = 2;
	for (int i = 1; i < pow; i++)
		result *= 2;
	return result;
}