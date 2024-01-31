/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:04:01 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/23 16:26:27 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main(){
char str[] = "len = 7";
char *s = str;
char emp[0];
char *e = emp;
printf("length should be 7: %d\n", ft_strlen(s));
printf("length should be 0: %d", ft_strlen(e));
}
*/
