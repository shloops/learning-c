/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:15:20 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/17 11:35:06 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int main()
{
	int x = 34;
	int y = 6;

	int *d = &x;
	int *m = &y;

	printf("d before %d \n", *d);	
	printf("m before %d \n", *m);	
	
	ft_div_mod(x, y, d, m);

	printf("d after %d \n", *d);	
	printf("m after %d \n", *m);	

}*/
