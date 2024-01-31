/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:27:14 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/31 14:45:28 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	result = nb;
	i = 1;
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

#include <stdio.h>
int main(){
	printf("2² = %d\n",ft_iterative_power(2,2));
	printf("3² = %d\n",ft_iterative_power(3,2));
	printf("3³ = %d\n",ft_iterative_power(3,3));
	printf("10³ = %d\n",ft_iterative_power(10,3));
	printf("10⁰ = %d\n",ft_iterative_power(10,0));
	printf("1⁷ = %d\n",ft_iterative_power(1,7));
	printf("4⁻³ = %d\n",ft_iterative_power(3,-3));
	printf("6¹ = %d\n",ft_iterative_power(6,1));
	printf("2⁴ = %d\n",ft_iterative_power(2,4));
	printf("2¹⁰⁰⁰⁰⁰ = %d\n",ft_iterative_power(2,100000));
}
