/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:25:17 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/25 18:04:27 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
	{
		return (1);
	}
	while (nb > 0)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (0);
}
/*
#include <stdio.h>
int main(){
printf("5! should be 120: %d\n", ft_recursive_factorial(5));
printf("12! should be 479001600: %d\n", ft_recursive_factorial(12));
printf("13! undefined (output wrong): %d\n", ft_recursive_factorial(13));
printf("2! should be 2: %d\n", ft_recursive_factorial(2));
printf("3! should be 6: %d\n", ft_recursive_factorial(3));
printf("0! should be 1: %d\n", ft_recursive_factorial(0));
printf("-1! should be 0: %d\n", ft_recursive_factorial(-5));
printf("-5! should be 0: %d\n", ft_recursive_factorial(-5));
printf("1! should be 1: %d\n", ft_recursive_factorial(1));
printf("100! should be undefined: %d\n", ft_recursive_factorial(100));
}
*/
