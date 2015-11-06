#include <stdio.h>
void max_character_count(char []);
int main(){
	char given_array[20];
	printf("Enter a string\n");
	scanf("%s", given_array);
	max_character_count(given_array);
	return 0;
}
void max_character_count(char given_array[]){
	int count_characters[26] = { 0 };
	char max_character_index;
        int max_count = 0;
	for (int i = 0; given_array[i] != '\0'; i++){
		count_characters[given_array[i] - 97]++;
		if (count_characters[given_array[i] - 97] > max_count){
			max_count = count_characters[given_array[i] - 97];
			max_character_index = given_array[i];
		}
	}
	printf("%c: %d\n",max_character_index, max_count);
	return;
}
