/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertoli <gbertoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 21:49:17 by gbertoli          #+#    #+#             */
/*   Updated: 2025/11/30 14:05:19 by gbertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

char	*alloc_word(const char *s, char c)
{
	int		len;
	int		i;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

int	fill_tab(char **tab, const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			tab[j] = alloc_word(&s[i], c);
			if (!tab[j])
				return (0);
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	tab[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	tab = malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	if (!fill_tab(tab, s, c))
	{
		free(tab);
		return (NULL);
	}
	return (tab);
}

// int	main(void)
// {
// 	char	**tab;
// 	int		i;

// 	tab = ft_split("bon jour ali     hello", ' ');
// 	i = 0;
// 	while (tab[i] != NULL)
// 	{
// 		printf("[%s]\n", tab[i]);
// 		i++;
// 	}
// 	return (0);
// }
