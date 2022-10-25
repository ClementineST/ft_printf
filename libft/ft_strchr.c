/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stclemen <stclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:54:08 by stclemen          #+#    #+#             */
/*   Updated: 2022/10/18 16:58:41 by stclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((char)str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if ((char)str[i] == (char)c)
		return ((char *)&str[i]);
	return (0);
}
