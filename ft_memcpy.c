/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertoli <gbertoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:10:36 by gbertoli          #+#    #+#             */
/*   Updated: 2025/11/23 20:22:00 by gbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*src_char;
	unsigned char	*dest_char;
	size_t			i;

	src_char = (unsigned char *)src;
	dest_char = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		*dest_char = *src_char;
		src_char++;
		dest_char++;
		i++;
	}
	return (dest);
}

// int main(void)
// {
//     char dest[] = "    ";
//     char src[] = "test";

//     printf("Source avant : %s\n", src);
//     printf("Dest avant : %s\n", dest);
//     ft_memcpy(dest, src, 4);
//     printf("Source apres : %s\n", src);
//     printf("Dest après : %s\n", dest);
//     return (0);
// }