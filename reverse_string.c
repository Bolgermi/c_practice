#include <stdio.h>
#include <string.h>

// Reverses a string without using strrev

int main ()
{
	char word[100], reverse[100];
	int length, count, rev_count;

	printf("Enter a word:\n");
	gets(word);
	
	length = strlen(word);

	for (count = length -1, rev_count = 0; count >= 0; count--,rev_count++) {
		reverse[rev_count] = word[count];
	}

	reverse[rev_count] = '\0';
	printf("%s\n",reverse);

	return 0;
}