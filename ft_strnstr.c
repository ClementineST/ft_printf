/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stclemen <stclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:15:50 by stclemen          #+#    #+#             */
/*   Updated: 2022/10/18 15:09:39 by stclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*lit == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] && lit[j] && i + j < len && big [i + j] == lit[j])
		{
			j++;
			if (lit[j] == '\0')
				return ((char *)&big [i]);
		}
		i++;
	}
	return (NULL);
}
/*int     main()
{
    char *longue = "Saout";
    char *petite = "u";
    char *ptr;

    ptr = ft_strnstr(longue, petite, 10);
    printf("%s\n", ptr);
}*/
