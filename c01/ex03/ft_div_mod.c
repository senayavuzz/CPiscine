/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syavuz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:07:10 by syavuz            #+#    #+#             */
/*   Updated: 2022/08/30 18:04:41 by syavuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int main()
{
	int a;
	int b;
	int div;
	int mod;

	a=5;
	b=2;

	ft_div_mod(a,b,&div,&mod);
	printf("%d / %d =%d,left  %d \n",a,b,div,mod);
	return (0);
}*/
