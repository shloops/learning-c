/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:11:31 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/18 17:16:38 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 122) || (str[i] >= 91 && str[i] <= 96))
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
char    *o = string1;

int zero = ft_str_is_alpha(z);
printf("%d", zero);

int zeroZ = ft_str_is_alpha(zz);
printf("%d", zeroZ);


int one = ft_str_is_alpha(o);
printf("%d", one);

int onee = ft_str_is_alpha(oe);
printf("%d", onee);
}
*/
