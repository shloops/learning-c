/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:38:30 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/30 17:12:08 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		result = s1[i] - s2[i];
		if (result != 0)
		{
			return (result);
		}
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac > 1)
	{
		while (i)
		{
			
		}
		//for ac-1 times
		//compare first char
		//compare second
	}
	return (0);
}
