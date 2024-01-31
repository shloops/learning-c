/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:04:49 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/23 15:21:50 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		result = s1[i] - s2[i];
		if (result != 0)
		{
			return (result);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main(){
char string1[] = "this is a string ";
char string2[] = "this is a string";

char *s1 = string1;
char *s2 = string2;

printf("%d", ft_strcmp(s1, s2));
}
*/
