/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:42:49 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/24 16:12:07 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
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
char source[] = "Maude ";
char destination[50] = "Harold & ";
printf("src before: %s \n\n", source);
printf("dest before: %s \n\n", destination);
printf("cat returns: %s \n\n", ft_strcat(destination, source));
printf("dest after: %s \n\n", destination);
printf("src after: %s \n\n", source);
return (0);
}
*/
