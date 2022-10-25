/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stclemen <stclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:31:07 by stclemen          #+#    #+#             */
/*   Updated: 2022/10/19 17:38:00 by stclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_compteur(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	num;
	int			i;

	num = (int)n;
	i = ft_compteur(n) -1;
	str = (char *)malloc(sizeof(char) * (ft_compteur(n) + 1));
	if (!str)
		return (NULL);
	if (n == -2147483648)
		num = 2147483648;
	else if (num < 0)
		num *= -1;
	str[ft_compteur(n)] = '\0';
	while (i >= 0)
	{
		str[i] = (num % 10) + 48;
		num = num / 10;
		i--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
/*int main()
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(987654321));
	printf("%s\n", ft_itoa(-123456789));
}*/