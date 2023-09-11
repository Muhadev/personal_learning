#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
int main(void)
{
	int file = open("pdp.txt", O_RDONLY, 0);
	close(file);

	int file2 = open("apc.txt", O_RDONLY, 0);
	printf("file = %d\n", file2);
	exit(0);
}
