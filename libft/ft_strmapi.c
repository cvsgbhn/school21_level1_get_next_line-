/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 14:20:35 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/24 17:18:02 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		length;
	int		counter;
	int		index;
	char	*f_results;

	if (!s || !f)
		return (NULL);
	length = ft_strlen(s);
	counter = 0;
	index = 0;
	if (length + 1 < length)
		return (NULL);
	f_results = (char *)malloc(sizeof(char) * (length + 1));
	if (!f_results)
		return (NULL);
	while (*s)
	{
		f_results[counter] = f(index, *s);
		counter++;
		s++;
		index++;
	}
	f_results[counter] = '\0';
	return (f_results);
}
