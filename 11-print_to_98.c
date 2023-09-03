#include "main.h"

void print_to_98(int n)
{
	int i, num, divisor;
    if (n <= 98) {
        for (i = n; i <= 98; i++) {
            num = i;
            if (num < 0) {
                _putchar('-');
                num = -num;
            }
            divisor = 1;
            while (divisor <= num / 10) {
                divisor *= 10;
            }
            while (divisor > 0) {
                _putchar(num / divisor + '0');
                num %= divisor;
                divisor /= 10;
            }
            if (i != 98) {
                _putchar(',');
                _putchar(' ');
            }
        }
    } else {
        for (i = n; i >= 98; i--) {
            num = i;
            if (num < 0) {
                _putchar('-');
                num = -num;
            }
            divisor = 1;
            while (divisor <= num / 10) {
                divisor *= 10;
            }
            while (divisor > 0) {
                _putchar(num / divisor + '0');
                num %= divisor;
                divisor /= 10;
            }
            if (i != 98) {
                _putchar(',');
                _putchar(' ');
            }
        }
    }
    _putchar('\n');
}

