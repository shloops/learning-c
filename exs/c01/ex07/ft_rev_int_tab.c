/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:49:36 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/17 13:50:04 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	store;
	int	j;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		store = tab[i];
		tab[i] = tab[j];
		tab[j] = store;
		i++;
		j--;
	}
}
/*
#include <stdio.h>
int main(){
int nums[] = {1, 2, 3, 4, 5};
int i;
printf("before");
for(i=0;i<5;i++) {
 printf("%d", nums[i]);
 }

int *n = nums;
ft_rev_int_tab(n, 5);
printf("after");
for(i=0;i<5;i++) {
printf("%d", nums[i]);
}

int nums1[] = {1, 2, 3, 4, 5, 6}; 
printf("before");
for(i=0;i<6;i++) {
 printf("%d", nums1[i]);
 }

int *n1 = nums1;
ft_rev_int_tab(n1, 6);
printf("after"); 
for(i=0;i<6;i++) {
printf("%d", nums1[i]);
}

}*/
