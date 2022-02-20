/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:14:10 by marmoral          #+#    #+#             */
/*   Updated: 2022/02/19 19:08:12 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char *str, char *to_find, int n)
{
	int	i;

	i = 0;
	while (to_find[i] != 0)
	{
		if (str[n] != to_find[i])
		{
			return (1);
			break ;
		}
		n++;
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[0] == 0)
	{
		return (str);
	}
	while (str[i] != 0)
	{
		if (str[i] == to_find[0])
		{
			if (check(str, to_find, i) == 0)
			{
				return (&str[i]);
				break ;
			}
		}
		i++;
	}
	return (0);
}
