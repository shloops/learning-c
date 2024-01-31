/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmcclell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:49:18 by gmcclell          #+#    #+#             */
/*   Updated: 2024/01/28 15:39:40 by gmcclell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_reverse(char *str, int len)
{
	int	i;
	int	store;
	int	j;

	i = 0;
	j = len - 1;
	while (i < len / 2)
	{
		store = str[i];
		str[i] = str[j];
		str[j] = store;
		i++;
		j--;
	}
	write(1, str, ft_strlen(str));
}

void	ft_form_number(int nb, char sym, char *number)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		number[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	if (sym == '-')
	{
		number[i] = sym;
		i++;
	}
	number[i] = '\0';
	ft_reverse(number, ft_strlen(number));
}

void	ft_putnbr(int nb)
{
	char	sym;
	char	number[12];
	char	*pn;

	sym = '+';
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		sym = '-';
		nb = nb * -1;
	}
	pn = number;
	ft_form_number(nb, sym, pn);
}
/*
#include<stdio.h> 
int	main() {
printf("\n\nshould be:\n2300345\n");
ft_putnbr(2300345);
printf("\n\nshould be:\n-2300345\n");
ft_putnbr(-2300345);
printf("\n\nshould be:\n-10\n");
ft_putnbr(-10);
printf("\n\nshould be:\n2147483647\n");
ft_putnbr(2147483647);
printf("\n\nshould be:\n-2147483648\n");
ft_putnbr(-2147483648);
printf("\n\nshould be:\n0\n");
ft_putnbr(0);
printf("\n\nshould be:\n42\n");
ft_putnbr(42);
printf("\n\nshould be:\n1\n");
ft_putnbr(1);
}
*/
