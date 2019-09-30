/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 17:26:04 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/22 20:03:07 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	int counter;
	int n;

	n = nb % 10;
	nb = nb / 10;
	if (nb < 0 || n < 0)
	{
		ft_putchar('-');
		nb *= -1;
		n *= -1;
	}
	if (nb != 0)
	{
		counter = 1;
		while (counter * 10 <= nb)
			counter *= 10;
		while (counter != 0)
		{
			ft_putchar(nb / counter % 10 + '0');
			counter = counter / 10;
		}
	}
	ft_putchar(n + '0');
}
