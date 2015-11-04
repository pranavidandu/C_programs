#include <stdio.h>
#include <stdlib.h>
void check(int[], int);
int main(){
	int a[6];
	printf("Enter any six elements\n");
	for (int i = 0; i < 6; i++)
		scanf("%d", &a[i]);
	int ele;
	printf("Enter an element\n");
	scanf("%d", &ele);
	check(a, ele);
	_getch();
	return 0;
}
void check(int a[6], int ele){
	int count1 = 0, count2 = 0;
	for (int i = 0; i < 6; i++){
		if (ele > a[i])
			count1++;
		if (ele < a[i])
			count2++;
	}
	printf("Greater:%d\nSmaller:%d\n", count1, count2);
	return;
}