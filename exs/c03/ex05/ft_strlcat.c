/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:50:40 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/24 16:10:43 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;

	dest_len = ft_strlen(dest);
	i = dest_len;
	j = 0;
	while (i < size - 1)
	{
		if ((j >= size - dest_len))
			break ;
		dest[i] = src[j];
		if (src[j] == '\0')
			break ;
		i++;
		j++;
	}
	if (i == size - 1)
		dest[i] = '\0';
	return (dest_len + ft_strlen(src));
}
/*
#include <stdio.h>

int main(){
char string[] = "..........";
char destination[15] = "++++++++++";
char *s = string;
char *d = destination;


printf("dest size before: %lu\n", sizeof(destination));
printf("len: %d\n", ft_strlcat(d,s,15));
printf("dest size after: %lu\n", sizeof(destination));
printf("dest: %s\n", destination);
}
*/
