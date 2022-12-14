/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stclemen <stclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:00:46 by stclemen          #+#    #+#             */
/*   Updated: 2022/10/27 14:25:59 by stclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_putvoid(unsigned long n, char *base, int start)
{
	unsigned long	i;
	int				size;

	i = n;
	size = 0;
	if (i == 0)
		return (ft_putstr("(nil)"));
	if (start)
		size += ft_putstr("0x");
	if (i > 15)
	{
		size += ft_putvoid(i / 16, base, 0);
		size += ft_putchar(base[i % 16]);
	}
	else
		size += ft_putchar(base[i]);
	return (size);
}

/*int		main()
{
	ft_putvoid(0, "0123456789abcdef", 1);
	return (0);
}*/
