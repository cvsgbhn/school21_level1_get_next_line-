#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	static char *ending;
	char		buf[BUFF_SIZE + 1];
	char 		*ptr_to_end;
	int			num_read;

	if (fd < 0 || fd > 256 || !line)
		return (-1);
	if (ending)
	{
		*line = ft_strjoin(*line, ending);
		ending = ft_strnew(1);
	}
	else
		*line = ft_strnew(1);
	//*line = ft_strnew(1);
	while (!ending && (num_read = read(fd, buf, BUFF_SIZE)))
	{
		if((ptr_to_end = ft_strrchr(buf, '\n')))
		{
			*ptr_to_end = '\0';
			ptr_to_end++;
			ending  = ft_strdup(ptr_to_end);
		}
		buf[num_read] = '\0';
		*line = ft_strjoin(*line, buf);
	}
	return (1);
}
