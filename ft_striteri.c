/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertoli <gbertoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 23:39:07 by gbertoli          #+#    #+#             */
/*   Updated: 2025/11/23 20:31:52 by gbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	alternative_ft_toupper(unsigned int i, char *c)
// {
// 	(void)i;
// 	if (*c >= 97 && *c <= 122)
// 		*c -= 32;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// int	main(void)
// {
// 	char str[] = "bonjour";

// 	ft_striteri(str, alternative_ft_toupper);
// 	return (0);
// }