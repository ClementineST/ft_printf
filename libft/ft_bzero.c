/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stclemen <stclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:52:48 by stclemen          #+#    #+#             */
/*   Updated: 2022/10/17 14:50:34 by stclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

/** int main(void)
{
    int i;
    char str[50] = "This is string.h library function";
	printf("\nAvant bzero(): %s\n", str);
    
    //Rempli 6 car a partir de str[5]avec $
	ft_bzero(str + 5, 6*sizeof(char));
    i = 0;
    while(i < 20)
    {
        printf("%s\n", str);
        str++;
        i++;
    }
	printf("\nApres bzero(): %s\n", str);
	return (0);
}**/
