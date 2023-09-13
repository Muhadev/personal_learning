#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	int file, size;
	char *ch = (char *)calloc(100, sizeof(char));
	file = open("sub.txt", O_RDONLY);
	if (file < 0)
	{
		perror("x1");
		exit(1);
	}
	size = read(file, ch, 10);
	printf("called read(%d, ch, 10). returned that"
			"%d bytes were read.\n", file, size);
	ch[size] = '\0';
	printf("Those bytes are as follows: %s\n", ch);
	return (0);
}
