/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syavuz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 17:26:03 by syavuz            #+#    #+#             */
/*   Updated: 2022/09/14 17:02:28 by syavuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	prime(int nb)
{
	int	i;
	int	k;

	k = nb / 2;
	i = 2;
	if (nb < 2)
		return (0);
	while (i <= k)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	k;

	k = nb;
	i = 2;
	if (nb < 2)
		return (2);
	if (prime (nb))
		return (nb);
	else
	{
		while (++nb)
		{
			if (prime (nb))
				return (nb);
		}
	}
	return (0);
}
