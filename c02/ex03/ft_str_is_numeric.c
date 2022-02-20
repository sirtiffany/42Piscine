/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:15:15 by marmoral          #+#    #+#             */
/*   Updated: 2022/02/15 13:18:28 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_if_num(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (('0' <= str[i]) && (str[i] <= '9'))
		{
			i++;
		}
		else
		{
			i--;
			break ;
		}
	}
	return (i);
}

int	ft_str_is_numeric(char *str)
{
	int	x;

	x = check_if_num(str);
	if (str[x] != '\0')
	{
		return (0);
	}
	else if (x < 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
