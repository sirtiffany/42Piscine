/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 20:00:06 by marmoral          #+#    #+#             */
/*   Updated: 2022/02/12 15:17:04 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	size2;
	int	nr;

	size2 = 0;
	nr = 0;
	size = size - 1;
	while (size2 < size)
	{
		nr = tab[size];
		tab[size] = tab[size2];
		tab[size2] = nr;
		size2++;
		size--;
	}
}
