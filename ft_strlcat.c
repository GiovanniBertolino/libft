/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertoli <gbertoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:22:43 by gbertoli          #+#    #+#             */
/*   Updated: 2025/12/01 20:18:14 by gbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] && i < n)
		i++;
	while (src[j])
		j++;
	len_dest = i;
	len_src = j;
	j = 0;
	if (len_dest >= n)
		return (n + len_src);
	while (src[j] && (len_dest + j < n - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len_dest + len_src);
}

// int	main(void)
// {
//     char dest[10] = "";
//     char src[] = "test";
//     printf("Retour : %zu\n", ft_strlcat(dest, src, 5));
//     printf("Afficher dest : %s\n", dest);
// 	return (0);
// }
