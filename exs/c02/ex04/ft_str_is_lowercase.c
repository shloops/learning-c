/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:23:21 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/18 17:49:15 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 97 || str[i] > 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main() {
char    string0[] = "123456s890";
char    *z = string0;

char    string00[] = "A[b";
char    *zz = string00;

char    string1e[0];
char    *oe = string1e;

char    string1[] = "aABcyYzZ";
char    *zzzz = string1;

int zero = ft_str_is_lowercase(z);
printf("zero %d \n", zero);

int zeroZ = ft_str_is_lowercase(zz);
printf("zero %d \n", zeroZ);


int zZZZ = ft_str_is_lowercase(zzzz);
printf("zero %d \n", zZZZ);

int onee = ft_str_is_lowercase(oe);
printf("one %d \n", onee);


char    string000[] = "aA";
char    *zzz = string000;
int zeroZZ = ft_str_is_lowercase(zzz);
printf("zero %d \n", zeroZZ);

char    string111[] = "ab";
char    *oo = string111;
int one11 = ft_str_is_lowercase(oo);
printf("one %d \n", one11);

char    string1111[] = "abcdefghijklmnopqrstuvwxyz";
char    *ooo = string1111;
int one111 = ft_str_is_lowercase(ooo);
printf("one %d \n", one111);

}
*/
