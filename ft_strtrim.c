/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertoli <gbertoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 19:59:05 by gbertoli          #+#    #+#             */
/*   Updated: 2025/12/01 19:31:52 by gbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_set(const char *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str_trim;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	j = ft_strlen(s1);
	k = 0;
	while (s1[i] && is_in_set(set, s1[i]))
		i++;
	while (j > i && is_in_set(set, s1[j - 1]))
		j--;
	str_trim = malloc(sizeof(char) * (j - i + 1));
	if (!str_trim)
		return (NULL);
	while (i < j)
		str_trim[k++] = s1[i++];
	str_trim[k] = '\0';
	return (str_trim);
}

// int main(void)
// {
//     printf("1: '%s'\n", ft_strtrim("  hello  ", " "));
//     printf("2: '%s'\n", ft_strtrim("xx42xx", "x"));
//     printf("3: '%s'\n", ft_strtrim("42", ""));
//     printf("4: '%s'\n", ft_strtrim("", " "));
//     printf("5: '%s'\n", ft_strtrim("aaa", "a"));
//     return (0);
// }
