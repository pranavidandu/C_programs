#include <stdio.h>
#include <stdlib.h>
void largest();
int main(){
	largest();
	_getch();
	return 0;
}
void largest(){
	int a[5];
	printf("Enter 5 elements\n");
	for (int i = 0; i < 5; i++){
		scanf("%d", &a[i]);
	}
	int n = 5;
	int lar1 = a[0];
	int lar2 = a[1];
	int temp = 0;
	if (lar1 < lar2){
		temp = lar1;
		lar1 = lar2;
		lar2 = temp;
	}
	int temp1;
	for (int i = 2; i <  n; i++){
		if (a[i] > lar1){
			temp1 = lar1;
			lar2 = lar1;
			lar1 = a[i];
		}
		else if (a[i] > lar2)
			lar2 = a[i];
		if (lar1 == lar2){
			lar2 = temp1;
		}
	}

	printf("First Largest: %d\nSecond Largest: %d", lar1, lar2);
	return;

}