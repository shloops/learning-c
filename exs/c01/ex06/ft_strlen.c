/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:27:22 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/17 12:45:23 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
char string[] = "my_string";
char *s = string;
int len = strlen(string);
printf("len: %d and ft_strlen: %d", len, ft_strlen(s));
}*/
