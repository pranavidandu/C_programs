#include <stdio.h>
#include <stdio.h>
void date_in_english(char[10]);
int main(){
	char date[10];
	printf("Enter date in format dd-mm-yyyy\n");
	scanf("%s", &date);
	date_in_english(date);
	_getch();
	return 0;
}
void date_in_english(char date[10]){
	int i;
	if (date[3] == '0'){
		switch (date[4]){
		case '1':
			printf("January");
			break;
		case '2':
			printf("February");
			break;
		case '3':
			printf("March");
			break;
		case '4':
			printf("April");
			break;
		case '5':
			printf("May");
			break;
		case '6':
			printf("June");
			break;
		case '7':
			printf("July");
			break;
		case '8':
			printf("August");
			break;
		case '9':
			printf("September");
			break;
		}
	}
	else{
		if (date[4] == '0')
			printf("October");
		else if (date[4] == '1')
			printf("November");
		else
			printf("December");
	}
	for (i = 0; i < 2; i++)
		printf(" %c", date[i]);
	if (date[0] == '0'){
		switch (date[1]) {
		case '1':
			printf("st");
			break;
		case '2':
			printf("nd");
			break;
		case '3':
			printf("rd");
			break;
		default:
			printf("th");
			break;
		}
	}
	else if (date[0] == '1'){
		printf("th");
	}
	else{
		switch (date[1]) {
		case '1':
			printf("st");
			break;
		case '2':
			printf("nd");
			break;
		case '3':
			printf("rd");
			break;
		default:
			printf("th");
			break;
		}
	}
	for (i = 6; i < 10; i++)
		printf(" %c", date[i]);
	return;
}