/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stclemen <stclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:33:14 by stclemen          #+#    #+#             */
/*   Updated: 2022/10/12 11:48:38 by stclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = ft_strlen(src);
	j = 0;
	if (size != 0)
	{
		while (j < size -1 && src[j] != '\0')
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (i);
}

/*int	main()
{
	char	dest[50];
	char	*src;
	unsigned int	size;
	
	size = 6;
	src = "La flemme de compiler.";
	printf("%d", ft_strlcpy(dest, src, size));
}*/
