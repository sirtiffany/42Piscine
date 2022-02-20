/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 16:20:46 by marmoral          #+#    #+#             */
/*   Updated: 2022/02/11 16:20:46 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	mo(int a, int *b)
{
	int	m;

	m = 0;
	m = a % *b;
	return (m);
}

int	di(int *a, int *b)
{
	int	d;

	d = 0;
	d = *a / *b;
	return (d);
}

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	n;

	n = 0;
	n = *a;
	*a = di(a, b);
	*b = mo(n, b);
}
