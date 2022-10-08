/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syavuz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:47:57 by syavuz            #+#    #+#             */
/*   Updated: 2022/08/29 17:18:26 by syavuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
//#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int		c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int main()
{
	int a;
	int b;

	a = 4;
	b = 2;
	printf("before : %d %d \n",a,b);
	ft_swap(&a, &b);
	printf("after : %d %d \n",a,b);
}*/
