#include <stdio.h>
#include <string.h>
void swap(char*, char*);
void permute(char[], int, int);
int main()
{
	int num;
	printf("Enter an eight digit number\n");
	scanf("%d", &num);
	int rem;
	int sum = 0;
	char given_array[100];
	int i = 0;
	while (num > 0)
	{
		rem = num % 10;
		given_array[i++] = rem + 48;
		num = num / 10;
	}
	given_array[i] = '\0';
	permute(given_array, 0,i - 1);
	_getch();
	return 0;
}
void swap(char *x, char *y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void permute(char given_array[], int m, int n)
{
	int i;
	if (m == n){
		printf("%s\n", given_array);
	}
	else
	{
		for (i = n; i >= m; i--)
		{
			swap((given_array + m), (given_array + i));
			permute(given_array, m + 1, n);
			swap((given_array + m), (given_array + i));
		}
	}
}