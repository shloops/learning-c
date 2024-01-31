/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:35:21 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/16 18:48:26 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
#include <stdio.h>
int main(void){
		int n = 43;
		printf("n before is %d", n);
		int *nbr = &n;
		ft_ft(nbr);
		printf("n is %d", n);
		printf("nbr is %d", *nbr);
		//printf("n is %d", n);
}*/
