/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 14:22:11 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/23 18:28:02 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n_len;
	char	*ft_hstk;
	char	*ft_ndl;

	i = 0;
	if (!needle[i])
		return ((char*)haystack);
	n_len = ft_strlen(needle);
	ft_hstk = (char*)haystack;
	ft_ndl = (char*)needle;
	while (*ft_hstk && n_len <= len--)
	{
		while (ft_hstk[i] == ft_ndl[i] && ft_hstk[i] && ft_ndl[i])
			i++;
		if (ft_ndl[i] == '\0')
			return (ft_hstk);
		ft_hstk++;
		i = 0;
	}
	return (NULL);
}
