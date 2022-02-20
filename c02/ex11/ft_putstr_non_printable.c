/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmoral <marmoral@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:08:55 by marmoral          #+#    #+#             */
/*   Updated: 2022/02/16 11:56:37 by marmoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_putstr(char *str)
{
	int		i;
	char	a;

	i = 0;
	while (str[i] != 0)
	{
		a = str[i];
		write(1, &a, 1);
		i++;
	}
}

char	*ft_rev_int_tab(char *tab, int size)
{
	int	size2;
	int	nr;

	size2 = 0;
	nr = 0;
	size = size - 1;
	while (size2 < size)
	{
		nr = tab[size];
		tab[size] = tab[size2];
		tab[size2] = nr;
		size2++;
		size--;
	}
	return (tab);
}

void	print_hex(char str)
{
	char	hex[16];
	char	out[16];
	int		c;
	int		n;

	n = 0;
	c = 0;
	ft_strcpy(hex, "0123456789abcdef");
	ft_strcpy(out, "");
	while (str != 0)
	{
		c = str % 16;
		out[n] = hex[c];
		n++;
		str /= 16;
	}
	out[n] = '\0';
	if (n == 1)
	{
		write(1, "0", 1);
	}
	ft_rev_int_tab(out, n);
	ft_putstr(out);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	a;

	i = 0;
	a = 0;
	while (str[i] != '\0')
	{
		if ((32 <= str[i]) && (str[i] <= 126))
		{
			a = str[i];
			write (1, &a, 1);
			i++;
		}
		else
		{
			write(1, "\\", 2);
			print_hex(str[i]);
			i++;
		}
	}
}
