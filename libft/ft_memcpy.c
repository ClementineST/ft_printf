/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stclemen <stclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:33:42 by stclemen          #+#    #+#             */
/*   Updated: 2022/10/19 15:01:55 by stclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*desti;
	const char	*scr;

	desti = dest;
	scr = src;
	if (!desti && !scr)
		return (NULL);
	i = 0;
	while (i < n)
	{
		desti[i] = scr[i];
		i++;
	}
	return (desti);
}

/*int     main()
{
    char    str1[] = "Sandwich";
    char    str2[] = "Sushi";

    printf("\nAvant memcpy(): %s\n", str1);

    ft_memcpy(str1, str2, 5);
    printf("\nApres memcpy(): %s\n", str1);
}*/
