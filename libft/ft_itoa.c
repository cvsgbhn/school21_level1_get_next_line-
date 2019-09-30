/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:56:11 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/23 17:16:57 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		count_size;
	int		flag;
	int		counter;
	char	*number;

	flag = 0;
	count_size = count_num_size(n);
	if (n < 0)
		flag = 1;
	if (!(number = ft_strnew(count_size + flag)))
		return (NULL);
	counter = count_size + flag - 1;
	number[counter] = '\0';
	flag ? (number[0] = '-') : number[0];
	while (counter >= flag)
	{
		if (flag)
			number[counter--] = (n % 10 * -1) + '0';
		else
			number[counter--] = n % 10 + '0';
		n = n / 10;
	}
	return (number);
}
