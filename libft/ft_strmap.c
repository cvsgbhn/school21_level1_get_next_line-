/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 14:19:48 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/24 17:16:00 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		length;
	int		counter;
	char	*f_results;

	if (!s || !f)
		return (NULL);
	length = ft_strlen(s);
	counter = 0;
	if (length + 1 < length)
		return (NULL);
	f_results = (char *)malloc(sizeof(char) * (length + 1));
	if (!f_results)
		return (NULL);
	while (*s)
	{
		f_results[counter] = f(*s);
		counter++;
		s++;
	}
	f_results[counter] = '\0';
	return (f_results);
}
