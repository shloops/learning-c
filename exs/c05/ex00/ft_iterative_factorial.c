/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:41:54 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/25 18:02:13 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	fac;

	if (nb == 0)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	else
	{
		fac = 1;
		while (nb > 0)
		{
			fac *= nb;
			nb--;
		}
	}
	return (fac);
}
/*
#include <stdio.h>
int main(){
printf("5! should be 120: %d\n", ft_iterative_factorial(5));
printf("12! should be 479001600: %d\n", ft_iterative_factorial(12));
printf("13! should be undefined (wrong): %d\n", ft_iterative_factorial(13));
printf("14! should be undefined (wrong): %d\n", ft_iterative_factorial(14));
printf("0! should be 1: %d\n", ft_iterative_factorial(0));
printf("-5! should be 0: %d\n", ft_iterative_factorial(-5));
printf("1! should be 1: %d\n", ft_iterative_factorial(1));
printf("100! should be undefined: %d\n", ft_iterative_factorial(100));
}
*/
