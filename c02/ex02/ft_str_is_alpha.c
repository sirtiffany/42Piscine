/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:39:47 by marmoral          #+#    #+#             */
/*   Updated: 2022/02/15 13:18:04 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_if_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (('A' <= str[i]) && (str[i] <= 'Z'))
		{
			i++;
		}
		else if (('a' <= str[i]) && (str[i] <= 'z'))
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

int	ft_str_is_alpha(char *str)
{
	int	x;

	x = check_if_alpha(str);
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
