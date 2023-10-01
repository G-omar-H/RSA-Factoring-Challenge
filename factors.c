#include "main.h"
/**
 * main - main
 * @ac: arguments counter
 * @av: argument vector
 * Return: void
*/
int main(int ac, char **av)
{
	long long int key; 
	int fd;
	char *buff = NULL;
	ssize_t n = 0;
	FILE *stream;

	(void)ac;
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		return (1);
	}
	stream = fdopen(fd, "r");
	while (getline(&buff, &n, stream) != -1)
	{
		key = atoll(buff);
		factorize(key);
	}
}
