/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:43:46 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/22 15:35:08 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*

#include <string.h>
#include <stdio.h>
int	main(){

char	string[] = "some string thing";
char	empty[] = "e";

char	*s = string;
char	*e = empty;
char	*r = ft_strncpy(e, s, 30);

printf("%s", r);

}
*/
/*
#include <string.h>
#include <stdio.h>
int main(){
char string[] = "some string thing";
char empty[] = "kkkkk";

char	*s = string;
char	*e = empty;

//char *r = ft_strncpy(e, s, strlen(empty));
char	*r = ft_strncpy(e, s, strlen(empty));

int i = 0;
while (i<23){
printf("%s", empty);
i++;
}
}
*/
