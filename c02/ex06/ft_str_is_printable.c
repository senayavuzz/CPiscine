/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syavuz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 11:32:32 by syavuz            #+#    #+#             */
/*   Updated: 2022/09/04 11:35:12 by syavuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	*a;
	char	*b;
	char	*c;
	a = "abcdefghijklmnoprstuvyz+%&/)}~";
	b = "abcdefghÂ";
	c = "";
	printf("%s = %d\n", a, ft_str_is_printable(a));
	printf("%s = %d\n", b, ft_str_is_printable(b));
	printf("%s = %d\n", c, ft_str_is_printable(c));
}*/
