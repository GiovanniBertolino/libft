/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertoli <gbertoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:54:02 by gbertoli          #+#    #+#             */
/*   Updated: 2025/11/23 20:26:45 by gbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t n)
{
	unsigned char	*dest_char;
	size_t			i;

	dest_char = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		*dest_char = 0;
		dest_char++;
		i++;
	}
}

// int main(void)
// {
//     char str[] = "test";
//     printf("Avant : %s\n", str);
//     ft_bzero(str, 4);
//     printf("Avant : %s\n", str);
//     return (0);
// }