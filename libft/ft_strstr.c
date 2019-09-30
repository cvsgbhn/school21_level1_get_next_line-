/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:35:59 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/23 18:27:57 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	n_len;
	char	*ft_haystack;
	char	*ft_needle;

	i = 0;
	if (!needle[i])
		return ((char*)haystack);
	n_len = ft_strlen(needle);
	ft_haystack = (char *)haystack;
	ft_needle = (char *)needle;
	if (haystack == needle)
		return ((char *)haystack);
	while (*ft_haystack && n_len)
	{
		while (ft_haystack[i] == ft_needle[i] && ft_needle[i] && ft_haystack[i])
			i++;
		if (ft_needle[i] == '\0')
			return (ft_haystack);
		ft_haystack++;
		i = 0;
	}
	return (NULL);
}
