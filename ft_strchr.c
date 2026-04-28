/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertoli <gbertoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:10:50 by gbertoli          #+#    #+#             */
/*   Updated: 2025/11/23 20:23:48 by gbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int searchedChar)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)searchedChar)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (char)searchedChar)
		return ((char *)&str[i]);
	return (NULL);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strchr("bonjour", 'j'));
// 	return (0);
// }