#include <stdio.h>

int main(void)
{
    int n = 50;
    unsigned long fib1 = 0, fib2 = 1, nextFib;
	int i;
    for (i = 0; i < n; i++)
    {
        nextFib = fib1 + fib2;

        printf("%lu", nextFib);

        fib1 = fib2;
        fib2 = nextFib;
    if (i == 49)
    {
	    printf("\n");
    }
    else
	    printf(",");
    }
    return (0);
}

