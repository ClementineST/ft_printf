/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stclemen <stclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:13:36 by stclemen          #+#    #+#             */
/*   Updated: 2022/10/19 14:58:04 by stclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*chaine;
	size_t	front;
	size_t	back;

	if (!s1 && !set)
		return (NULL);
	front = 0;
	while (s1[front] && ft_strchr(set, s1[front]))
		front++;
	back = ft_strlen(s1);
	while (back && ft_strchr(set, s1[back]))
		back--;
	chaine = ft_substr(s1, front, back + 1 - front);
	if (!chaine)
		return (NULL);
	return (chaine);
}

/*int     main()
 {   
     printf("%s\n",ft_strtrim("xoabxcbon    xxx", "x"));
     return(0);
 }*/
