#include <math.h>
#include <stdio.h>


long maxPrimeFactors(long n)
{
	int i;
	long maxPrime = -1;
	while (n % 2)
	{
		maxPrime = 2;
		n >>= 1;
	}
	while (n % 3)
	{
		maxPrime = 3;
		n /= 3;
	}
	for (i = 5; i * i <= n; i += 6)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n = n / i;
		}
		while (n % (i + 2) == 0)
		{
			maxPrime = i + 2;
			n = n / (i + 2);
		}
	}
	if (n > 4)
		maxPrime = i;

	return (maxPrime);
}
