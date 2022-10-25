/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stclemen <stclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:11:35 by stclemen          #+#    #+#             */
/*   Updated: 2022/10/18 17:04:03 by stclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str) + 1;
	while (i--)
	{
		if ((char)str[i] == (char)c)
			return ((char *)&str[i]);
	}
	return (0);
}

/*int     main(void)
{
    char *str = "c'est cool.";
    char *car;
    car = ft_strrchr(str, 'o');
    printf("%s\n", car);
    return 0;
}*/
