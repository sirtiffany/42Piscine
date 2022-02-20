/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:29:44 by marmoral          #+#    #+#             */
/*   Updated: 2022/02/15 13:18:43 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_if_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (('a' <= str[i]) && (str[i] <= 'z'))
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

int	ft_str_is_lowercase(char *str)
{
	int	x;

	x = check_if_lower(str);
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
