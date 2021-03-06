/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 09:26:19 by marmoral          #+#    #+#             */
/*   Updated: 2022/02/10 16:43:59 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = '0';
	y = '1';
	z = '2';
	write(1, "012", 3);
	z++;
	while (x <= '7')
	{
		while (y <= '8')
		{
			while (z <= '9')
			{
				write(1, ", ", 2);
				write(1, &x, 1);
				write(1, &y, 1);
				write(1, &z, 1);
				z++;
			}
			z = ++y + 1;
		}
		y = ++x;
	}	
}
