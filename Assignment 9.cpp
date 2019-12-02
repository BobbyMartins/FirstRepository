#include <stdio.h>
int getLength(char string[81]);
int isAlphabetical(char c);
int isVowel(char c);
int countVowels(char string[]);
int countConsonants(char string[], int vals);


int main()
{
	char string[81];
	int numVowels, numConsonants;
	puts("Enter string:");
	gets_s(string, 80);
	numVowels = countVowels(string);
	printf("Number of vowels = %d \n\n", numVowels);
	numConsonants = countConsonants(string, numVowels);
	printf("Number of consonants = %d \n\n", numConsonants);
	return 0;
}

int getLength(char string[81]) {
	int i;
	for (i = 0; string[i] != '\0'; ++i);
	return i;
}

int isAlphabetical(char c) {
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
		return 1;
	}
	else {
		return 0;
	}
}

int isVowel(char c) {
	if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U') {
		return 1;
	}
	else {
		return 0;
	}
}

int countVowels(char string[]) {
	int vowels = 0;
	for (int i = 0; string[i] != '\0';i++)
		if (isAlphabetical(string[i]) && isVowel(string[i])) {
			vowels++;
		}
	return vowels;
}

int countConsonants(char string[], int vals) {
	int consonants = 0;
	for (int i = 0; string[i] != '\0'; i++)
		if (isAlphabetical(string[i])) {
			if (isVowel(isAlphabetical(string[i])) == 0){
				consonants++;
			}
			
		}
	return consonants - vals + 1;
}
