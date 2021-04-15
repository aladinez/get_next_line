#include "get_next_line.h"

int main()
{
	char *line;
	int fd;
	int ret;


	fd = open("file", O_RDONLY);
	while ((ret = get_next_line(fd, &line)))
	{
		printf("%s\n", line);
	}
	printf("%s\n", line);
	return (0);
}
