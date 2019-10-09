/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:18:13 by vdanilo           #+#    #+#             */
/*   Updated: 2019/10/09 18:29:24 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char		*check_ending(char **line, char *ending)
{
	char	*ptr_to_end;

	ptr_to_end = NULL;
	if (ending)
	{
		if ((ptr_to_end = ft_strchr(ending, '\n')))
		{
			*ptr_to_end = '\0';
			*line = ft_strdup(ending);
			ft_strcpy(ending, ++ptr_to_end);
		}
		else
		{
			*line = ft_strdup(ending);
			ft_strclr(ending);
		}
	}
	else
		*line = ft_strnew(1);
	return (ptr_to_end);
}

int		get_next_line(const int fd, char **line)
{
	static char *ending;
	char		buf[BUFF_SIZE + 1];
	char		*ptr_to_end;
	char		*temp_array;
	int			num_read;

	if (fd < 0 || fd > 256 || !line)
		return (-1);
	ptr_to_end = check_ending(line, ending);
	while (!ptr_to_end && (num_read = read(fd, buf, BUFF_SIZE)))
	{
		buf[num_read] = '\0';
		if ((ptr_to_end = ft_strchr(buf, '\n')))
		{
			*ptr_to_end = '\0';
			ptr_to_end++;
			ending = ft_strdup(ptr_to_end);
		}
		temp_array = *line;
		*line = ft_strjoin(*line, buf);
		free(temp_array);
	}
	//if (ft_strlen(ending) || num_read)
	//	printf("%d\n", 1);
	//else
	//	printf("%d\n", 0);
	if (!ft_strlen(*line))
	{
		return ((ft_strlen(ending) || num_read) ? 1 : 0);
	}
	else
		return (1);
}
