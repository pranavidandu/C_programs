#include <stdio.h>
#include <stdlib.h>
void insert_ele(int [], int, int);
int find_pos(int [], int, int);
int main(){
	int a[20];
	int n = 0;
	printf("Enter size of the array\n");
	scanf("%d", &n);
	printf("Enter %d elements\n", n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	int ele;
	printf("Enter element to insert\n");
	scanf("%d", &ele);
	insert_ele(a,ele, n);
	_getch();
	return 0;
}
void insert_ele(int a[], int ele, int n){
	int pos = find_pos(a, ele, n);
	for (int i = n; i > pos; i--){
		a[i] = a[i - 1];
	}
	if (a[pos] >= a[pos + 1] && ele < a[pos])
		a[pos] = ele;
	else
		a[pos + 1] = ele;
	for (int i = 0; i < n + 1; i++)
		printf("%d ", a[i]);
	return;
}
int find_pos(int a[], int ele, int n){
	int low = 0;
	int high = n - 1;
	int mid;
	while (low <= high){
		mid = (low + high) / 2;
		if (ele > a[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
	return mid;
}