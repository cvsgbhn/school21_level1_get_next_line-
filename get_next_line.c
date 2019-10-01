#include "get_next_line.h"

int		ft_chr_before_n(char *string)
{
	int counter;

	counter = 0;
	if (string)
	{
		while (string[counter] && string[counter] != '\n')
			counter++;
	}
	return (counter);
}

void	ft_copy_after_n(char *dest, char *src, int n)
{
	while (n--)
		src++;
	ft_strcpy(dest, src);
}

int		get_next_line(const int fd, char **line)
{
	static char ending[BUFF_SIZE];
	char		buf[BUFF_SIZE];
	size_t 		n;

	if (fd <= 0 || fd > 256)
		return (-1);
	if (ending)
		ft_strcpy(*line, ending);
	ft_strclr(ending);
	while (!(ft_strlen(ending)))
	{
		read (fd, buf, BUFF_SIZE);
		n = ft_chr_before_n(buf);
		//ft_strncat(*line, buf, n);
		
		if (n < ft_strlen(buf))
			ft_copy_after_n(ending, buf, n);
		(*line)++;
	}
	return (1);
}
