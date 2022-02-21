/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:33:14 by marmoral          #+#    #+#             */
/*   Updated: 2022/02/21 01:01:30 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_sign(char *str, unsigned int n)
{
	int	count;

	count = 0;
	while (str[n] == '-' || str[n] == '+')
	{
		if (str[n] == '-')
		{
			count++;
		}
		n++;
	}
	if ((count % 2) == 0)
	{
		return (1);
	}
	return (-1);
}

int	find_start(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
	{
		if ((('0' <= str[i]) && (str[i] <= '9'))
			|| str[i] == '-' || str[i] == '+')
		{
			break ;
		}
		i++;
	}
	return (i);
}

int	find_nbr(char *str, unsigned int n)
{
	while (str[n] == '-' || str[n] == '+')
	{
		n++;
	}
	return (n);
}

int	ft_atoi(char *str)
{
	int		x;
	int		nbr;
	long	result;

	nbr = 0;
	result = 0;
	x = find_nbr(str, find_start(str));
	while (('0' <= str[x]) && (str[x] <= '9'))
	{
		nbr = (int) str[x] - '0';
		result = (result * 10) + nbr;
		x++;
	}
	return (check_sign(str, find_start(str)) * result);
}
