/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stclemen <stclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:18:40 by marvin            #+#    #+#             */
/*   Updated: 2022/10/17 15:38:49 by stclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	char	*str;

	if (ptr == NULL)
		return (NULL);
	str = ptr;
	while (n)
	{
		*str = (unsigned char)c;
		str++;
		n--;
	}
	return (ptr);
}

/*int main(void)
{
    char str[50] = "This is string.h library function";
	printf("\nAvant memset(): %s\n", str);
    
    //Rempli 6 car a partir de str[5]avec $
	ft_memset(str + 5, '$', 6*sizeof(char));
	printf("\nApres memset(): %s\n", str);
	return (0);
}*/
