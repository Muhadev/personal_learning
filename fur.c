#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	int file = open("fur.txt", O_RDONLY);
	if (file < 0)
	{
		perror("c1");
		exit(1);
	}
	printf("opened the file = %d\n", file);
	if (close(file) < 0)
	{
		perror("c1");
		exit(1);
	}
	printf("closed the file.\n");
}
