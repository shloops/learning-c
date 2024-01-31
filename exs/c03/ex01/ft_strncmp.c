/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:36:23 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/23 15:23:32 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				result;

	i = 0;
	while (i < n)
	{
		if (s1[i] != '\0' || s2[i] != '\0')
		{
			result = s1[i] - s2[i];
			if (result != 0)
			{
				return (result);
			}
			i++;
		}
		else
		{
			break ;
		}
	}
	return (0);
}
/*
#include <stdio.h>
int main(){
char string1[] = "this b is a string";
char string2[] = "this a is a string";

char *s1 = string1;
char *s2 = string2;
//printf("s1:%d s2:%d i:%d  ", s1[i], s2[i], i);
printf("%d", ft_strncmp(s1, s2, 50));
}
*/
