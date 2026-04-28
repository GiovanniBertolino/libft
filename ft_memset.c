/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertoli <gbertoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:21:08 by gbertoli          #+#    #+#             */
/*   Updated: 2025/11/23 20:22:09 by gbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int value, size_t size)
{
	unsigned char	*dest_char;
	size_t			i;

	dest_char = (unsigned char *)dest;
	i = 0;
	while (i < size)
	{
		*dest_char = (unsigned char)value;
		dest_char++;
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char str[] = "Test";
// 	printf("Avant : %s\n", str);
// 	ft_memset(str, 'a', 5);
// 	printf("Apres : %s\n", str);
// 	return (0);
// }