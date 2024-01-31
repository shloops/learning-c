/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:20:29 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/16 11:57:12 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	lead_number;
	char	second_number;
	char	third_number;

	lead_number = '0';
	second_number = '1';
	third_number = '2';
	while (third_number <= '9')
	{
		write(1, &lead_number, 1);
		write(1, &second_number, 1);
		write(1, &third_number, 1);
		if (third_number == '9')
		{
			if (second_number == '8')
			{
				lead_number++;
				second_number = lead_number;
			}
			second_number++;
			third_number = second_number;
			third_number++;
		}
		else
		{
			third_number++;
		}
		if (lead_number > '7')
		{
			break ;
		}
		write(1, ", ", 2);
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return 0;
}*/
