/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 17:25:09 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/22 14:48:02 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_words(char const *s, char c)
{
	int counter;
	int index;

	counter = 0;
	index = 0;
	while (s[index])
	{
		if (s[index] != c && (s[index - 1] == c || index == 0))
			counter++;
		index++;
	}
	return (counter);
}
