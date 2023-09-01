#include <stdio.h>


int main(void)
{
	int nums;
	for (nums = 0; nums <= 9; nums++)
	{
		if (nums != 0)
		{
			putchar(',');
		}
		putchar('0' + nums);
	}
	putchar('\n');
	return (0);

}
