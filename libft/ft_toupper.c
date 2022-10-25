/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stclemen <stclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:35:35 by stclemen          #+#    #+#             */
/*   Updated: 2022/10/17 16:54:10 by stclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ' ');
	return (c);
}

/*int	main()
{
	printf("%s\n", ft_toupper('a'));
	printf("%d\n", ft_toupper('B'));
	printf("%d\n", ft_toupper('4'));
}*/
