/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:49:36 by marmoral          #+#    #+#             */
/*   Updated: 2022/02/11 15:49:36 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	mo(int a, int b)
{
	int	m;

	m = 0;
	m = a % b;
	return (m);
}

int	di(int a, int b)
{
	int	d;

	d = 0;
	d = a / b;
	return (d);
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = di(a, b);
	*mod = mo(a, b);
}
