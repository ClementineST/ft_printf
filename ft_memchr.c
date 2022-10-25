/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stclemen <stclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:48:57 by stclemen          #+#    #+#             */
/*   Updated: 2022/10/17 15:31:21 by stclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*string;

	string = (void *)s;
	if (s == 0)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (string[i] == (char)c)
			return (&string[i]);
		i++;
	}
	return (NULL);
}
/*int     main()
{
    const void*s = "Hello @ tout le monde ";
    int     c = 64;
    size_t  n = 3;
    char *func;
    func = ft_memchr(s, c, n);

    printf("Resultat: %s\n", func);
    return(0);
}*/
