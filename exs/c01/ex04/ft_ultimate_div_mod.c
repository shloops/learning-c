/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:36:08 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/17 11:57:14 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
#include <stdio.h>

int main(){
	int x = 12;
	int y = 7;
	int *a = &x;
	int *b = &y;
	
	printf("a before %d \n", *a);
	printf("b before %d \n", *b);

	ft_ultimate_div_mod(a, b);
	
	printf("a after %d \n", *a);
	printf("b after %d \n", *b);
}*/
