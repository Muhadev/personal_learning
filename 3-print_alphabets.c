#include <stdio.h>


int main (void)
{
	int letter, letters;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letters = 'A'; letters <= 'Z'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
