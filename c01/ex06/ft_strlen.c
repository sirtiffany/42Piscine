/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 19:17:28 by marmoral          #+#    #+#             */
/*   Updated: 2022/02/11 19:17:28 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (str[i] != 0)
	{
		i++;
		n++;
	}
	return (n);
}
