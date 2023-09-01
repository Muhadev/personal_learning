#include <stdio.h>


int main(void)
{
	char letter;
	for (letter = '0'; letter <= 'f'; letter++)
	{
		putchar(letter);
		if (letter == '9')
		{
			letter = 'a' - 1;
		}
	}
	putchar('\n');
	return (0);
}
