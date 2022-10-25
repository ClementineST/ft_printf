/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stclemen <stclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:28:28 by stclemen          #+#    #+#             */
/*   Updated: 2022/10/19 18:02:55 by stclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_error(char **tab)
{
	int	i;

	i = 0;
	if (!tab)
	{
		while (tab && tab[i])
			free(tab[i++]);
		free(tab);
		exit (0);
	}
	return (NULL);
}


int	ft_wordcount(const char *s, char c)
{
	int	i;
	int	liste;

	i = 0;
	liste = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i +1] == c)
			liste++;
		if (s[i] != c && s[i +1] == '\0')
			liste++;
		i++;
	}
	return (liste);
}

char	*ft_newdup(const char *s, size_t n)
{
	char	*str;
	size_t	i;

	str = ((char *)malloc(sizeof(char) * n + 1));
	i = 0;
	if (!(str))
		return (NULL);
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		count_ptr;
	char	**ptr;

	count_ptr = 0;
	ptr = ((char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1)));
	if (!s || !ptr)
		return (ft_error(ptr));
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		j = i;
		while (s[j] && s[j] != c)
			j++;
		ptr[count_ptr++] = ft_newdup(&s[i], j - i);
		if (!ptr[count_ptr - 1])
			return (ft_error(ptr));
		i = j;
	}
	ptr[count_ptr] = 0;
	return (ptr);
}
int     main()
{
    char **s;

    s = ft_split("LA.ICI.ETLA", '.');
    for (int i = 0 ; i < 5 ; i++)
        printf("%s", s[i]);
    return (0);
}
