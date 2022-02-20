/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:47:03 by marmoral          #+#    #+#             */
/*   Updated: 2022/02/12 15:16:53 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long	reversenbr(int nb)
{
	int		b;
	long	r;
	long	nb2;

	r = 0;
	b = 0;
	nb2 = nb;
	if (nb2 < 0)
	{
		nb2 = nb2 * (-1);
	}
	while (nb2 > 0)
	{
		b = (nb2 % 10);
		r = r * 10 + b;
		nb2 = nb2 / 10;
	}
	return (r);
}

void	ft_putnbr(int nb)
{
	int			b;
	long		a;
	char		z;

	a = reversenbr(nb);
	b = 0;
	z = '0';
	if (nb == 0)
	{
		write(1, &z, 1);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}
	while (a > 0)
	{
		b = (a % 10) + '0';
		write (1, &b, 1);
		a /= 10;
	}
	while ((nb % 10) == 0 && nb > 0)
	{
		write(1, &z, 1);
		nb = nb / 10;
	}
}
