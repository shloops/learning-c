/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:58:23 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/28 14:40:57 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power > 0)
		return (result *= (ft_recursive_power(nb, power - 1)));
	if (power == 0)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int main(){
	printf("2² = %d\n",ft_recursive_power(2,2));
	printf("3² = %d\n",ft_recursive_power(3,2));
	printf("3³ = %d\n",ft_recursive_power(3,3));
	printf("10³ = %d\n",ft_recursive_power(10,3));
	printf("10⁰ = %d\n",ft_recursive_power(10,0));
	printf("1⁷ = %d\n",ft_recursive_power(1,7));
	printf("4⁻³ = %d\n",ft_recursive_power(3,-3));
	printf("6¹ = %d\n",ft_recursive_power(6,1));
	printf("2⁴ = %d\n",ft_recursive_power(2,4));
	printf("2¹⁰⁰⁰⁰⁰ = %d\n",ft_recursive_power(2,100000));
}
*/
