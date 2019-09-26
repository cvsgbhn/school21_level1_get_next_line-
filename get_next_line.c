#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	static char *line;

	line = (char*)malloc(sizeof(char) * BUF_SIZE);

}
