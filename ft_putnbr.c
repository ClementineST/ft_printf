/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stclemen <stclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:58:57 by stclemen          #+#    #+#             */
/*   Updated: 2022/10/27 13:41:21 by stclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		size;

	size = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		size += ft_putchar('-');
		n = -n;
	}
	if (n < 10)
		size += ft_putchar(n + '0');
	else
	{
		size += ft_putnbr(n / 10);
		size += ft_putnbr(n % 10);
	}
	return (size);
}

int	ft_put_unsigned_nbr(unsigned int n)
{
	int		size;

	size = 0;
	if (n < 10)
		size += ft_putchar(n + '0');
	else
	{
		size += ft_put_unsigned_nbr(n / 10);
		size += ft_put_unsigned_nbr(n % 10);
	}
	return (size);
}
