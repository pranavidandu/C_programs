#include <stdio.h>
int compute(unsigned int, unsigned int, unsigned int);
int main(){
	unsigned int x, y, a;
	printf("Enter x\n");
	scanf("%d", &x);
	printf("Enter y\n");
	scanf("%d", &y);
	printf("Enter a\n");
	scanf("%d", &a);
	int result = compute(x, y, a);
	printf("Result is %d\n", result);
	_getch();
	return 0;
}
int compute(unsigned int x, unsigned int y, unsigned int a){
	//printf("y is %d\n", y);
	int value = 1;
	for (int i = 0; i < y; i++){
		value = value * x % a;
	}
	//printf("value is %d\n", value);
	return value;
}
