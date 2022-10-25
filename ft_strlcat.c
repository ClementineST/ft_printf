/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stclemen <stclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:40:27 by stclemen          #+#    #+#             */
/*   Updated: 2022/10/17 16:24:50 by stclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	j = ft_strlen(src);
	k = ft_strlen(dest);
	if (size == 0)
		return (j);
	if (size <= k)
		return (size + j);
	i = 0;
	while (src[i] && (k + i) < size - 1)
	{
		dest[k + i] = src[i];
		i++;
	}
	dest[k + i] = '\0';
	return (j + k);
}
