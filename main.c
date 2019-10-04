#include "get_next_line.h"

int		main(void)
{
	char 	*line;
	int 	fd;

	fd = open("test_file2", O_RDONLY);
	while (get_next_line(fd, &line))
	{
		printf("%s\n", line);
	}
	return (0);
}
