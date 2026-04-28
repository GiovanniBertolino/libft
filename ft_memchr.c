/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertoli <gbertoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:10:40 by gbertoli          #+#    #+#             */
/*   Updated: 2025/11/23 20:21:53 by gbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)memoryBlock;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char str[] = "bonjour";
//     char *ptr = ft_memchr(str, 'j', 9);

// 	if (ptr)
//         printf("%c\n", *ptr);
// 	return (0);
// }