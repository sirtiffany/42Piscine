/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v2.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 00:23:57 by marmoral          #+#    #+#             */
/*   Updated: 2022/02/28 21:14:36 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	long	a;
	long	nbr2;

	nbr2 = nbr;
	if (nbr2 < 0)
	{
		write(1, "-", 1);
		nbr2 = -nbr2;
	}
	if (nbr2 >= 10)
	{
		a = (nbr2 % 10) + '0';
		nbr2 /= 10;
		ft_putnbr(nbr2);
		write(1, &a, 1);
	}
	else
	{
		a = nbr2 + '0';
		write(1, &a, 1);
	}
}
