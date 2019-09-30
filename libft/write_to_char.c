/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_to_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 14:55:55 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/20 14:56:20 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*write_to_char(char *number, int n, int decimal, int count_size)
{
	int digit;

	while (decimal > 1)
	{
		digit = 1;
		decimal = decimal / 10;
		while (n - (decimal * digit) >= 0)
			digit++;
		number[count_size] = (digit - 1) + '0';
		count_size++;
		n = n - (decimal * (digit - 1));
	}
	return (number);
}
