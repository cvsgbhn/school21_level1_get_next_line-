/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 17:24:51 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/22 20:05:43 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	int counter;
	int n;

	n = nb % 10;
	nb = nb / 10;
	if (nb < 0 || n < 0)
	{
		ft_putchar_fd('-', fd);
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
			ft_putchar_fd(nb / counter % 10 + '0', fd);
			counter = counter / 10;
		}
	}
	ft_putchar_fd(n + '0', fd);
}
