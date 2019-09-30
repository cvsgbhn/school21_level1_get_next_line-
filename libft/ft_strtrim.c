/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:19:24 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/22 20:02:32 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	len;
	size_t	index1;
	size_t	index2;
	char	*copy;

	if (!s)
		return (NULL);
	index1 = 0;
	len = ft_strlen((const char *)s);
	while (s[index1] == ' ' || s[index1] == '\t' || s[index1] == '\n')
		index1++;
	if (index1 == len)
		return (ft_strnew(0));
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
		len--;
	if (!(copy = ft_strnew(len - index1)))
		return (NULL);
	index2 = 0;
	while (index1 < len)
	{
		copy[index2++] = s[index1++];
	}
	copy[index2] = '\0';
	return (copy);
}
