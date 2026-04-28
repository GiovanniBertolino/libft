/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertoli <gbertoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:10:39 by gbertoli          #+#    #+#             */
/*   Updated: 2025/11/23 20:21:56 by gbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *memoryBlock1, const void *memoryBlock2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)memoryBlock1;
	str2 = (const unsigned char *)memoryBlock2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
//     char str1[] = "aller";
//     char str2[] = "allet";
//     printf("Le résultat est : %d\n", ft_memcmp(str1, str2, 5));
//     return (0);
// }