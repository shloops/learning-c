/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:40:25 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/31 14:16:18 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest = malloc(sizeof(char));

	i = -1;
	while (str[++i] != '\0')
		dest[i] = str[i];
	return (dest);
}

int main(int c, char **v){
if (c>1)
{
int i = 1;
while (i<c)
{
char *d = 
}
}
}
