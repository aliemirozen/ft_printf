/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_others.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliemirozen <alozen@student.42istanbul.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:26:56 by aliemirozen       #+#    #+#             */
/*   Updated: 2023/02/12 15:26:59 by aliemirozen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	unsigned_putnbr(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 10)
	{
		i += putnbr(n / 10);
		i += putnbr(n % 10);
	}
	else
	{
		i += ft_putchar(48 + n);
	}
	return (i);
}

int	hex_putnbr(unsigned int n, char *hex)
{
	int	i;

	i = 0;
	if (n >= 16)
		i += hex_putnbr((n / 16), hex);
	i += ft_putchar(hex[(n % 16)]);
	return (i);
}
