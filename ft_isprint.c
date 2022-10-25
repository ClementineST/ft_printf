/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stclemen <stclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:24:18 by stclemen          #+#    #+#             */
/*   Updated: 2022/10/17 15:06:41 by stclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int	main()
{
	char	str[]= "Lmnhd";
	char	str1[]= " ";
	char	str2[]= "";

	printf("%d\n", ft_isprint('d'));
	printf("%d\n", ft_isprint(' '));
	}*/
