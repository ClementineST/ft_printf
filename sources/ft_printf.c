/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stclemen <stclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:57:36 by stclemen          #+#    #+#             */
/*   Updated: 2022/10/24 14:57:36 by stclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_putchar(int c)
{
    write (1, &c, 1);
    return (1);
}

int     ft_formats(va_list args, const char format)
{
    int     print_len;

    print_len = 0;
    if (format == 'c')
        print_len += ft_putchar(va_arg(args, int));
    else if (format == 's')
        print_len += ft_printstr(va_arg(args, char *));
    else if (format == 'p')
        print_len += ft_print_ptr(va_arg(args, unsigned long long));
    else if (format == 'd' || format == 'i')
        print_len += ft_printnbr(va_arg(args, int));
    else if (format == 'u')    
        print_len += ft_print_unsigned(va_arg(args, unsigned int));
    else if (format == 'x' || format == 'X')
        print_len += ft_print_hexa(va_arg(args, unsigned int), format)
    else if (format == '%')
        print_len += ft_printpercent();
}
int		ft_printf(const char*str, ...)
{


}