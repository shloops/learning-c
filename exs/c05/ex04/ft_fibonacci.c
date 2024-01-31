/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:46:12 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/29 15:17:45 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index == 1)
		return (1);
	if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	if (index == 0)
		return (0);
	return (-1);
}
/*
#include <stdio.h>
int main(){
printf("index = 7: %d\n", ft_fibonacci(7));
printf("index = 20: %d\n", ft_fibonacci(20));
printf("index = 10: %d\n", ft_fibonacci(10));
printf("index = -7: %d\n", ft_fibonacci(-7));
printf("index = 1: %d\n", ft_fibonacci(1));
printf("index = 2: %d\n", ft_fibonacci(2));
printf("index = 3: %d\n", ft_fibonacci(3));
printf("index = 0: %d\n", ft_fibonacci(0));
printf("index = -1: %d\n", ft_fibonacci(-1));
}
*/
