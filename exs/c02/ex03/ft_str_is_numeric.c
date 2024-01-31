/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:05:54 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/18 15:53:42 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 47 && str[i] < 58))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main(){
char	string0[] = "123456s890";
char	*z = string0;

char	string1[] = "1234567890";
char	*o = string1;

char    string1e[0];
char    *oe = string1e;

int	zero = ft_str_is_numeric(z);
printf("%d", zero);

int one = ft_str_is_numeric(o);
printf("%d", one);

int onee = ft_str_is_numeric(oe);
printf("%d", onee);


}*/
