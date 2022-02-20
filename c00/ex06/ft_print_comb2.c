/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:56:04 by marmoral          #+#    #+#             */
/*   Updated: 2022/02/09 10:43:15 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	z;

	x = 0;
	z = 0;
	while (x != 98)
	{
		while (z++ != 99)
		{
			ft_putchar((x / 10) + '0');
			ft_putchar((x % 10) + '0');
			ft_putchar(' ');
			ft_putchar((z / 10) + '0');
			ft_putchar((z % 10) + '0');
			if (x != 98 || z != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	x++;
	z = x;
	}
	write (1, "98 99", 5);
}
