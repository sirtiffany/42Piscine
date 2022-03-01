/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:32:11 by marmoral          #+#    #+#             */
/*   Updated: 2022/03/01 23:53:30 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(unsigned char x, unsigned char z)
{
	unsigned int	y;

	y = x - z;
	return (y);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;
	unsigned int	i;

	a = 0;
	i = 0;
	while (i < n && (s1[i] != 0 || s2[i] != 0))
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
