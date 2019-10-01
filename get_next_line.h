#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 10
# include <unistd.h>
# include <fcntl.h>
# include "libft.h"
# include "libft.h"

int		get_next_line(const int fd, char **line);
#endif