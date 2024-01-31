/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:41:16 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/24 12:19:50 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] == to_find[j])
		{
			i++;
			j++;
			if (str[i] == '\0' && to_find[j] != '\0')
				break ;
			if (to_find[j] == '\0')
				return (&str[i - j]);
		}
		i = i + 1 - j;
		j = 0;
	}
	return (0);
}
/*
#include <stdio.h>
int main(){
char string[] = "111ab111ab11eAndOtherStuff";
char toFind[] = "111ab11e";
char *str = string;
char *tF = toFind;

char *result = ft_strstr(str, tF);

printf("main string: %s\n", str);
printf("returned substring: %s\n\n", result);


char notToFind[] = "cbcabcce";
tF = notToFind;

result = ft_strstr(str, tF);

printf("main string: %s\n", str);
printf("returned null: %s", result);
}
*/
