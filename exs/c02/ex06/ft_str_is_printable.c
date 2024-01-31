/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:51:49 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/19 11:37:15 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h> 
#include <string.h> 
int main()
{
	char string[] = "\0some non empty string";
	char *s = string;
	int len = strlen(string);
	printf("is printable %d\n",ft_str_is_printable(s));
	printf("length %d",len);

	char space[] = " ";
	s = space;
	printf("is printable %d\n",ft_str_is_printable(s));
	
	char tilde[] = "~";
	s = tilde;
	printf("is printable %d\n",ft_str_is_printable(s));

	char tab[] = "\t a tab";
	s = tab;
	printf("is printable %d\n",ft_str_is_printable(s));
}
*/
