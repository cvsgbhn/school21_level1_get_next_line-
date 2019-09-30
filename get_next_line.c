#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	char	*buf;
	int		chars_before_end;

	if (fd < 0 || fd > 256)
		return (0);
	buf = (char*)malloc(sizeof(char) * BUFF_SIZE);
	while (*line)
	{
		while (read(fd, &buf, BUFF_SIZE))
		{
			chars_before_end = 0;
			while (buf[chars_before_end] != '\n' && buf[chars_before_end])
				chars_before_end++;
			ft_strncpy(*line, buf, chars_before_end);
		}
		(*line)++;
	}
	return (1);
}
