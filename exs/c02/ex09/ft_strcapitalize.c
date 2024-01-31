/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 11:31:16 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/22 15:50:24 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0' && str[i + 1] != '\0')
	{
		if (str[i] >= 32 && str[i] != 127)
		{
			if (!(str[i] >= 97 && str[i] <= 122) && str[i + 1] >= 97)
			{
				if (str[i + 1] <= 122 && !(str[i] >= 65 && str[i] <= 90))
				{
					if (!(str[i] >= 48 && str[i] <= 57))
						str[i + 1] -= 32;
				}
			}
		}
		i++;
	}
	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	return (str);
}
/*
#include <stdio.h>

#include <string.h>
int main(){
char string[] = "sTringy @[ th!Ng}y An/d 0ther+stUf6 @swell  ";
char *s = string;
int i = 0;
printf("%s\n", string);
ft_strcapitalize(s);
//printf("%s", string);
while (s[i] != '\0') {
printf("%c", s[i]);
i++;
}
int len = strlen(string);
printf("%d", len);
return 0;
}
*/
