/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:53:29 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/31 12:45:42 by gmcclell         ###   ########.fr       */
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
		return (1);
	}
	return (0);
}
/*
#include <stdio.h>
int main(){
int nbs[] = {-100,-1,0,2,3,4,5,6,7,8,9,10,11,199,2147483647};
int i = 0;
while (i < 15)
{
printf("is %d prime? %d\n", nbs[i], ft_is_prime(nbs[i]));
i++;
}
}
*/
