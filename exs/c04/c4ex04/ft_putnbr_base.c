/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 12:41:12 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/28 13:06:51 by gmcclell         ###   ########.fr       */
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

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_strcmp(base, "0123456789") == 0)
		
	else if (ft_strcmp(base, "0123456789ABCDEF") == 0)

	else if (ft_strcmp(base, "01") == 0)
	
	else if (ft_strcmp(base, "poneyvif") == 0)
	
	else

}
