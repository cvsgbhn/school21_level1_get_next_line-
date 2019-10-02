#include "get_next_line.h"

int		main(void)
{
	char 	*line;
	int 	fd;

	fd = open("test_file1", O_RDONLY);
	get_next_line(fd, &line);
	printf("%s\n\n", line);

	get_next_line(fd, &line);
	printf("%s", line);
	return (0);
}
