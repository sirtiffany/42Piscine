/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:21:12 by marmoral          #+#    #+#             */
/*   Updated: 2022/02/15 13:56:10 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (('a' <= str[0]) && (str[0] <= 'z'))
		{
			str[0] = (str[0] - 'a') + 'A';
		}
		if (str[i - 1] == 32 || str[i - 1] == '+' || str[i - 1] == '-')
		{
			if (('a' <= str[i]) && (str[i] <= 'z'))
			{
				str[i] = (str[i] - 'a') + 'A';
			}
		}
		else if (('A' <= str[i]) && (str[i] <= 'Z'))
		{
			str[i] = (str[i] - 'A') + 'a';
		}
		i++;
	}
	return (str);
}
