/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syavuz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 11:17:56 by syavuz            #+#    #+#             */
/*   Updated: 2022/09/04 11:26:08 by syavuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
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
	a = "ABCDETUVWXZ";
	b = "ABCDEFa";
	c = "";
	printf("%s = %d\n", a, ft_str_is_uppercase(a));
	printf("%s = %d\n", b, ft_str_is_uppercase(b));
	printf("%s = %d\n", c, ft_str_is_uppercase(c));
}*/
