/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stclemen <stclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:39:56 by stclemen          #+#    #+#             */
/*   Updated: 2022/10/19 14:44:57 by stclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	if (size && (size * count) / size != count)
		return (NULL);
	res = malloc(count * size);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, count * size);
	return (res);
}

/*int    main()
{
    char    **tab;
    int    i = 0;
    char  *t;

    tab = malloc(sizeof(char) * 5); //prevoir taille totale
    tab[0] = ft_strdup("salut");
    tab[1] = ft_strdup(" 42");
    tab[2] = ft_strdup(" ca va?");
    tab[3] = 0; //securiser tableau de tableau de char, pas our int
    while (tab && tab[i])
    {
        printf("%s\n", tab[i]);
        i++;
    }
    t = ft_calloc(2, sizeof(tab));
    printf("%s\n", t);
    return (0);
}*/

// int main()
// {
//     charstr;
//     char *str2;

//     str = calloc(0, 0);
//     free (str);
//     str2 = ft_calloc(0, 0);
//     free (str2);
// }
