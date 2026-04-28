/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertoli <gbertoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 23:42:18 by gbertoli          #+#    #+#             */
/*   Updated: 2025/11/30 14:17:39 by gbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// fonction qui calcule la longueur d'un int
int	len_int(int n)
{
	long	nb;
	int		len;

	nb = n;
	len = 0;
	if (nb <= 0)
		len++;
	if (nb < 0)
		nb = -nb;
	while (nb > 0)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

// fonction qui convertit un int en string
char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		len;

	nb = n;
	len = len_int(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		str[len - 1] = (nb % 10) + '0';
		nb /= 10;
		len--;
	}
	return (str);
}

// int	main(void)
// {
// 	printf("%s", ft_itoa(-2147483648));
// 	return (0);
// }
