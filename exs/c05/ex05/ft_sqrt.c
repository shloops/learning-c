/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:21:16 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/31 10:46:55 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	reduce;

	reduce = 1;
	i = 0;
	while (nb >= 0)
	{
		if (nb == 0)
			return (i);
		nb = nb - reduce;
		reduce += 2;
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(){
printf("squareroot of 4 = %d\n",ft_sqrt(4));
printf("squareroot of 10 = %d\n",ft_sqrt(10));
printf("squareroot of 16 = %d\n",ft_sqrt(16));
printf("squareroot of 0 = %d\n",ft_sqrt(0));
printf("squareroot of 1 = %d\n",ft_sqrt(1));
printf("squareroot of -1 = %d\n",ft_sqrt(-1));
printf("squareroot of 81 = %d\n",ft_sqrt(81));
printf("squareroot of -100 = %d\n",ft_sqrt(-100));
printf("squareroot of 576 = %d\n",ft_sqrt(576));
printf("squareroot of 2147395600 = %d\n",ft_sqrt(2147395600));
printf("squareroot of 2147483647 = %d\n",ft_sqrt(2147483647));
}
*/
