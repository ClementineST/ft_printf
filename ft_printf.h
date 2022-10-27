/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stclemen <stclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:30:09 by stclemen          #+#    #+#             */
/*   Updated: 2022/10/25 12:30:09 by stclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef FT_PRINTF_H
# define FT_PRINF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);

int		ft_check_flag(va_list list, char c);

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_put_unsigned_nbr(unsigned int n);
int		ft_putvoid(unsigned long n, char *base, int start);
int		ft_puthexa(unsigned int n, char *base);

char	*ft_strchr(char *str, char c);

#endif
