#include <stdio.h>

int main(){
	
	char word1[20];
	char word2[20];

	printf("Enter the word: ");
	scanf("%s", word1);

	printf("Enter the second word: ");
	scanf("%s", word2);

	printf("Yor word concatenade is: %s%s\n", word1, word2);
	return 0;
}
