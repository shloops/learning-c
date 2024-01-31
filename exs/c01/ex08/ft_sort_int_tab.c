/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:53:51 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/17 16:44:20 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	t;

	while (size > 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				t = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = t;
			}
			i++;
		}
		size--;
	}
}
/*
#include <stdio.h>
int main(){
int nums[] = {1, 4, 7, 2, 1, 11, -5, 8, 2};
int i;
printf("before");
for(i=0;i<9;i++) {
 printf(", %d", nums[i]);
 }

int *n = nums;
ft_sort_int_tab(n, 9);
printf("after");
for(i=0;i<9;i++) {
printf(", %d", nums[i]);
}

return 0;
}*/
