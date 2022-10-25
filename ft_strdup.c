/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stclemen <stclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:01:55 by stclemen          #+#    #+#             */
/*   Updated: 2022/10/11 11:39:05 by stclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*stri;
	int		i;

	stri = ((char *)malloc(sizeof(char) * ft_strlen(s) + 1));
	i = 0;
	if (!(stri))
		return (NULL);
	while (*s)
		stri[i++] = *s++;
	stri[i] = '\0';
	return (stri);
}

/*int	main(int ac, char **av)
{
	char	*machaine;
	char	*autrechaine;

	if (ac == 2)
	{
		machaine = ft_strdup(av[1]);
		autrechaine = strdup(av[1]);
		printf(":%s:\n:%s:\n", machaine, autrechaine);
	}
	return(0);
}*/
