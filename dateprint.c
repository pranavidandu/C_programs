#include <stdio.h>
void date_in_english(int, int, int, int);
void print_year(int);
int main(){
	char day[10];
	printf("Enter date in format dd/mm/yyyy\n");
	scanf("%s", &day);
	int i = 0;
	int date = 0;
	int temp;
	for (i = 0; day[i] != '/'; i++){
		temp = day[i] - 48;
		date =date * 10;
		date =date + temp % 10;
	}
	int month = 0;
	while (day[++i] != '/'){
		temp = day[i] - 48;
		month = month * 10;
		month = month + temp % 10;
	}
	int year1 = 0;
	int year2 = 0;
	int j = i + 2;
	while(i < j){
		temp = day[++i] - 48;
		year1 = year1 * 10;
		year1 = year1 + temp % 10;
	}
	while (day[++i] != '\0'){
		temp = day[i] - 48;
		year2 = year2 * 10;
		year2 = year2 + temp % 10;
	}
	if ((date >= 1 && date <= 31) && (month >= 1 && month <= 12))
		date_in_english(date, month, year1, year2);
	else
		printf("wrong input\n");
	_getch();
	return 0;
}
void date_in_english(int date, int month, int year1, int year2){
	char date_array[31][20] = {"first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth", "eleventh", "twevelth", "thirteenth", "fourteenth", "fifteenth", "sixteenth", "seventeenth", "eighteenth", "nighteenth", "twentieth", "twentyfirst", "twentysecond", "twentythird","twentyfourth", "twentyfifth", "twentysixth", "twentyseventh", "twentyeighth", "twentyninth", "thirtieth", "thirtyfirst"};
	int i = 0;
	printf("%s ", date_array[date - 1]);
	char month_array[12][10] = { "january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december" };
	printf("%s ", month_array[month - 1]);
	print_year(year1);
	print_year(year2);
	return;
}
void print_year(year){
	if (year >= 10 && year <= 19){
		switch (year){
		case 10:
			printf("Ten");
			break;
		case 11:
			printf("Eleven");
			break;
		case 12:
			printf("Twelve");
			break;
		case 13:
			printf("Thirteen");
			break;
		case 14:
			printf("Fourteen");
			break;
		case 15:
			printf("Fifteen");
			break;
		case 16:
			printf("Sixteen");
			break;
		case 17:
			printf("Seventeen");
			break;
		case 18:
			printf("Eighteen");
			break;
		case 19:
			printf("Nineteen");
			break;
		}
	}
	else{
		int temp = year;
		int first_digit, second_digit;
			second_digit = temp % 10;
			first_digit = temp / 10;
			switch (first_digit)
			{
			case 0:
				printf(" Hundred");
				break;
			case 2:
				printf(" Twenty");
				break;
			case 3:
				printf(" Thirty");
				break;
			case 4:
				printf(" Fourty");
				break;
			case 5:
				printf(" Fifty");
				break;
			case 6:
				printf(" Sixty");
				break;
			case 7:
				printf(" Seventy");
				break;
			case 8:
				printf(" Eighty");
				break;
			case 9:
				printf(" Ninety");
				break;	
			default:
				printf("Wrong format");
				return;
			}
			switch (second_digit)
			{
			case 0:
				break;
			case 1:
				printf(" One");
				break;
			case 2:
				printf(" Two");
				break;
			case 3:
				printf(" Three");
				break;
			case 4:
				printf(" Four");
				break;
			case 5:
				printf(" Five");
				break;
			case 6:
				printf(" Six");
				break;
			case 7:
				printf(" Seven");
				break;
			case 8:
				printf(" Eight");
				break;
			case 9:
				printf(" Nine");
				break;
			default:
				printf("Wrong format");
				return;
			}
	}
	return;
}