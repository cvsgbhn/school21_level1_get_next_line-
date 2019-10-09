#include "get_next_line.h"

int		main(void)
{
	char 	*line;
	int 	fd;
	int		a;

	fd = open("gnl7_1.txt", O_RDONLY);
	while ((a = get_next_line(fd, &line)) > 0)
	{
		printf("%d\n", a);
		printf("%s\n", line);
	}
	//printf("%s\n", line);
	return (0);
}
