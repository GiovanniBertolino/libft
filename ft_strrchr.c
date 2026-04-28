/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertoli <gbertoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:10:28 by gbertoli          #+#    #+#             */
/*   Updated: 2025/11/26 16:07:15 by gbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int searchedChar)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)searchedChar)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}

// int main(void)
// {
//     printf("%s\n", ft_strrchr("bonjour", 'j'));
//     return (0);
// }