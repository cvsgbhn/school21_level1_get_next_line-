/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 19:59:14 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/24 19:41:09 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	sum_len;
	char	*concatenated;

	if (!s1 || !s2)
		return (NULL);
	sum_len = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (!(concatenated = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1))))
		return (NULL);
	while (sum_len < len_s1)
	{
		concatenated[sum_len] = s1[sum_len];
		sum_len++;
	}
	while (sum_len - len_s1 < len_s2)
	{
		concatenated[sum_len] = s2[sum_len - len_s1];
		sum_len++;
	}
	concatenated[sum_len] = '\0';
	return (concatenated);
}
