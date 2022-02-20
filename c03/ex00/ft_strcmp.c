/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:25:37 by marmoral          #+#    #+#             */
/*   Updated: 2022/02/17 20:03:34 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(unsigned char x, unsigned char z)
{
	unsigned int	y;

	y = 0;
	if (x < z)
	{
		y = x - z;
	}
	if (x > z)
	{
		y = (x) - (z);
	}
	return (y);
}

int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned int	a;

	i = 0;
	a = 0;
	while (s1[i] != 0 || s2[i] != 0)
	{
		if (s1[i] == s2[i])
		{
			a = 0;
			i++;
		}
		else
		{
			a = check(s1[i], s2[i]);
			break ;
		}
	}
	return (a);
}
