/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramoussa <ramoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 13:29:40 by ramoussa          #+#    #+#             */
/*   Updated: 2023/03/28 11:39:22 by ramoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*get_word(char **s, char stop_at)
{
	int		size;
	char	*word;

	size = 0;
	while ((**s) && (**s) == stop_at)
		(*s)++;
	while ((*s)[size] && (*s)[size] != stop_at)
		size++;
	word = (char *)malloc(sizeof(char) * (size + 1));
	if (word == 0)
		return (0);
	size = 0;
	while ((**s) && (**s) != stop_at)
	{
		word[size] = (**s);
		(*s)++;
		size++;
	}
	word[size] = '\0';
	while ((**s) && (**s) == stop_at)
		(*s)++;
	return (word);
}

static int	word_count(char const *s, char c)
{
	int	word_count;
	int	i;

	i = 0;
	word_count = 0;
	while (s[i])
	{
		if (s[i] != c && (!s[i + 1] || s[i + 1] == c))
			word_count++;
		i++;
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**words;
	int		word_idx;
	char	*str;

	if (s == 0)
		return (0);
	str = (char *)s;
	word_idx = 0;
	count = word_count(s, c);
	words = (char **)malloc(sizeof(char *) * (count + 1));
	if (count > 0)
	{
		if (words == 0)
			return (0);
		while (*s && *s == c)
			s++;
		while (*str)
		{
			words[word_idx] = get_word(&str, c);
			word_idx++;
		}
	}
	words[word_idx] = 0;
	return (words);
}
