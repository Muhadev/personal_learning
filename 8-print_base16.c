#include <stdio.h>

int main (void)
{
	int letter, nums;
	for (nums = '0'; nums <= '9'; nums++)
	{
		putchar(nums);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
