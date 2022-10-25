/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stclemen <stclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:38:32 by stclemen          #+#    #+#             */
/*   Updated: 2022/10/17 15:05:33 by stclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*int main(void)
{
    printf("%d\n", ft_isascii('a'));
    printf("%d\n", ft_isascii('b'));
    printf("%d\n", ft_isascii(' '));

    return 0;
}*/
