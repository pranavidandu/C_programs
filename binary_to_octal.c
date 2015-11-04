#include <stdio.h>
void bin_to_oct(char[]);
int main(){
	char given_string[100];
	printf("Enter string in binary format\n");
	scanf("%s", given_string);
	bin_to_oct(given_string);
	_getch();
	return 0;
}
void bin_to_oct(char given_string[100]){
	int len = 0;
	int i = 0;
	while (given_string[i++] != '\0')
		len++;
	char result[100];
	len--;
	int sum;
	i = 0;
	while (len >= 0){
		sum = 0;
		if (given_string[len--] == '1')
			sum += 1;
		if (given_string[len--] == '1')
			sum += 2;
		if (given_string[len--] == '1')
			sum += 4;
		result[i++] = sum + 48;
	}
	for (int j = i - 1; j >= 0; j--)
		printf("%c", result[j]);
	return;
}