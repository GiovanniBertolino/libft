/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertoli <gbertoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:10:32 by gbertoli          #+#    #+#             */
/*   Updated: 2025/11/23 20:22:06 by gbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*src_char;
	unsigned char	*dest_char;
	size_t			i;

	src_char = (unsigned char *)src;
	dest_char = (unsigned char *)dest;
	i = 0;
	if (dest > src)
	{
		while (n-- > 0)
			dest_char[n] = src_char[n];
	}
	else
	{
		while (i < n)
		{
			dest_char[i] = src_char[i];
			i++;
		}
	}
	return (dest);
}

// int main(void)
// {
//     char dest[10] = "";
//     char src[] = "Hello";
//     ft_memmove(dest, src, 2);
//     printf("%s\n", dest);
//     return (0);
// }