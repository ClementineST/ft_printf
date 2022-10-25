/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stclemen <stclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:28:40 by stclemen          #+#    #+#             */
/*   Updated: 2022/10/17 16:53:32 by stclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > '@' && c < '[')
		return (c + 32);
	return (c);
}
/*int	main()
{
char	str[]="BonJour";
char	str1[]="yyyyyIIj";

printf("%d\n", ft_tolower('b'));
printf("%d\n", ft_tolower('B'));
}*/
