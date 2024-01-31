/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:53:08 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/19 12:03:27 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (1)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			break ;
		}
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
//#include <limits.h>

int main(){

char	string[] = "this is my string";
char	empty[strlen(string)];

char	*s = string;
char	*e = empty;
ft_strcpy(e, s);

int	i = 0;

while (i<strlen(empty)){
printf("%c", e[i]);
//printf("%d \n", INT_MAX);
i++;
}

}*/
