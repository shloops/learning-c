/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:38:53 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/17 11:11:13 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
#include <stdio.h>
int main(){
		int x = 5;
		int y = 7;
		int *a = &x;
		int *b = &y;
		printf("a before: %d \n", *a);
		printf("b before: %d \n", *b);
		ft_swap(a, b);
		printf("a after: %d \n", *a);
		printf("b after: %d \n", *b);
}*/
