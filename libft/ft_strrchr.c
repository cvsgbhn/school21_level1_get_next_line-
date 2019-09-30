/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:39:38 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/21 12:21:28 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		counter;
	int		k;

	k = -1;
	counter = 0;
	while (s[counter])
	{
		if (s[counter] == (unsigned char)c)
			k = counter;
		counter++;
	}
	if (c == '\0')
		return ((char*)(s + counter));
	if (k != -1)
		return ((char*)(s + k));
	return (NULL);
}
