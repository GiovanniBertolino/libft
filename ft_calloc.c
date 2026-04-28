/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertoli <gbertoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:26:02 by gbertoli          #+#    #+#             */
/*   Updated: 2025/11/27 17:53:40 by gbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*ptr;

	if (elementCount > 0 && elementSize > 32767 / elementCount)
		return (NULL);
	ptr = malloc(elementCount * elementSize);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, elementCount * elementSize);
	return (ptr);
}

// int main(void)
// {
//     int *arr = ft_calloc(5, sizeof(int));
//     for (int i = 0; i < 5; i++)
//     printf("%d\n", arr[i]);
//     free(arr);
//     return (0);
// }