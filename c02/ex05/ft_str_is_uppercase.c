/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:51:32 by marmoral          #+#    #+#             */
/*   Updated: 2022/02/15 13:19:01 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_if_upper(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (('A' <= str[i]) && (str[i] <= 'Z'))
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

int	ft_str_is_uppercase(char *str)
{
	int	x;

	x = check_if_upper(str);
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
