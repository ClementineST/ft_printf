/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stclemen <stclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:07:40 by stclemen          #+#    #+#             */
/*   Updated: 2022/10/19 17:03:40 by stclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new_s = (char *)malloc(sizeof (char) * (len1 + len2 + 1));
	if (!new_s)
		return (NULL);
	ft_strlcpy(new_s, (char *)s1, len1 +1);
	ft_strlcat(new_s + (len1), s2, len2 +1);
	return (new_s);
}
/*int     main()
{
    char str1[] = "Ici";
    char str2[] = " et la.";

    printf("%s\n", ft_strjoin(str1, str2));
    return(0);
}*/
