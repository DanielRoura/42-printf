/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: droura-s <droura-s@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:10:16 by droura-s          #+#    #+#             */
/*   Updated: 2024/09/24 10:19:56 by droura-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_split_free(int split_idx, char **split)
{
	while (split_idx > 0)
	{
		free(split[split_idx - 1]);
		split_idx--;
	}
	free(split);
	return (0);
}

static char	**ft_split_loop(int idx, char **split, char const *str, char sep)
{
	int		start;
	int		split_idx;
	char	*word;

	start = -1;
	split_idx = 0;
	while (idx <= (int) ft_strlen(str))
	{
		if (start != -1 && (str[idx] == sep || str[idx] == '\0') && idx > start)
		{
			word = ft_substr(str, start, idx - start);
			if (!word)
				return (ft_split_free(split_idx, split));
			split[split_idx] = word;
			split_idx++;
			start = -1;
		}
		else if (str[idx] != sep && start == -1)
			start = idx;
		idx++;
	}
	split[split_idx] = 0;
	return (split);
}

static int	ft_split_count_words(int idx, char const *str, char sep)
{
	int		start;
	int		words;

	start = -1;
	words = 0;
	while (idx <= (int) ft_strlen(str))
	{
		if (start != -1 && (str[idx] == sep || str[idx] == '\0') && idx > start)
		{
			words++;
			start = -1;
		}
		else if (str[idx] != sep && start == -1)
			start = idx;
		idx++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	size;

	if (!s)
		return (0);
	size = ft_split_count_words(0, s, c) + 1;
	split = ft_calloc(size, sizeof(char *));
	if (!split)
		return (0);
	if (!ft_split_loop(0, split, s, c))
		return (0);
	return (split);
}
