/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:48:55 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/31 15:50:27 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb > 1)
	{
		while (i <= nb / 2)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
		return (nb);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	if (nb % 2 == 0)
		nb += 1;
	while (nb)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb += 2;
	}
	return (0);
		//return (ft_find_next_prime(nb + 1));
	//return (ft_find_next_prime(nb + 2));
}

#include <stdio.h>
int main(){
int nbs[]={-100,-1,0,2,3,4,7,8,9,10,11,198,199,200,2147483646,2147483647};
int i = 0;
while (i < 16)
{
printf("the prime >= %d is %d\n", nbs[i], ft_find_next_prime(nbs[i]));
i++;
}
}

