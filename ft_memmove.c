/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stclemen <stclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:18:51 by stclemen          #+#    #+#             */
/*   Updated: 2022/10/19 14:47:37 by stclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*csrc;
	char	*cdest;
	size_t	i;

	csrc = (char *)src;
	cdest = (char *)dest;
	i = 0;
	if (cdest > csrc)
		while (n-- > 0)
			cdest[n] = csrc[n];
	else
	{
		while (i < n)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	return (cdest);
}
/*
int main()
{
    char csrc[100] = "Bonjour tt le monde";
    ft_memmove(csrc+6, csrc, 10);
    printf("%s", csrc);
    return 0;
}*/
