/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:20:34 by marmoral          #+#    #+#             */
/*   Updated: 2022/02/16 16:42:42 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_if_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((32 <= str[i]) && (str[i] <= 126))
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

int	ft_str_is_printable(char *str)
{
	int	x;

	x = check_if_printable(str);
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
