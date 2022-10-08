/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syavuz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:33:28 by syavuz            #+#    #+#             */
/*   Updated: 2022/09/04 12:35:36 by syavuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_char_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

void	ft_putstr_non_printable(char	*str)
{
	int				i;
	unsigned char	a;

	i = 0;
	while (str[i])
	{
		a = str[i];
		if (ft_char_printable(a))
			ft_putchar(a);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[a / 16]);
			ft_putchar("0123456789abcdef"[a % 16]);
		}
		i++;
	}
}

/*
int		main(void)
{
	char	*string;
	string = "Co\tcou\ntu va\200s bi\10en ?";
	ft_putstr_non_printable(string);
	return (0);
}*/
