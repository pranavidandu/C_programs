#include <stdio.h>
#include <stdlib.h>
void max_character_count(char []);
int main(){
	char given_array[20] = "abaacbbboopuuuuu";
	max_character_count(given_array);
	_getch();
	return 0;
}
void max_character_count(char given_array[10]){
	int count_characters[26] = { 0 };
	int max_character_index = 0;
	for (int i = 0; given_array[i] != '\0'; i++){
		count_characters[given_array[i] - 97]++;
	}
	int max_count = count_characters[0];
	for (int i = 1; i < 26; i++){
		if (count_characters[i] > max_count){
			max_count = count_characters[i];
			max_character_index = i;
		}
	}
	printf("%c: %d\n",97 + max_character_index, max_count);
	return;
}