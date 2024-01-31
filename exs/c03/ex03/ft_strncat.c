/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:12:03 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/24 12:03:52 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main() {
char source[] = "MaudeBut not this";
char destination[50] = "Harold & ";
printf("src before: %s \n\n", source);
printf("dest before: %s \n\n", destination);
printf("cat returns: %s \n\n", ft_strncat(destination, source, 5));
printf("dest after: %s \n\n", destination);
printf("src after: %s \n\n", source);
return (0);
}
*/
