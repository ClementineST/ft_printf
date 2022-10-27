/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stclemen <stclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:53:27 by stclemen          #+#    #+#             */
/*   Updated: 2022/10/26 21:53:27 by stclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_puthexa(unsigned int n, char *base)
{
    int     size

    size = 0;
    if (n > 15)
    {
        size += ft_puhexa((n / 16), base);
        size += ft_putchar(base[n % 16]);
    }
    else
        size += ft_putchar(base[n])
    return (size);
}