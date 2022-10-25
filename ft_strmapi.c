/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stclemen <stclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:47:54 by stclemen          #+#    #+#             */
/*   Updated: 2022/10/19 17:50:11 by stclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	char	*str;
	int		i;

	str = ((char *)malloc(sizeof(char) * ft_strlen(s) + 1));
	i = 0;
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

char f(unsigned int, char c)
{
    char str;
    str = c +1;
    return(str);
}
int main()
{
    char str1[] = "abcdefg";
    char *str2;
    str2 = ft_strmapi(str1, *f);
	
    printf("%s\n", str2);   
}
*/