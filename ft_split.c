/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madlab <madlab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:00:31 by madlab            #+#    #+#             */
/*   Updated: 2023/11/06 20:23:28 by madlab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static int	is_present(char c, char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

static int	count_word(char *str, char *sep)
{
	int		word_count;
	int		new_word;
	char	*str_p;

	str_p = str;
	word_count = 0;
	new_word = 1;
	while (*str_p)
	{
		if (is_present(*str_p, sep) == -1)
		{
			if (new_word == 1)
				word_count++;
			new_word = 0;
		}
		else
			new_word = 1;
		str_p++;
	}
	return (word_count);
}

static char	*extract_word(char **str, char *charset)
{
	int		i;
	int		size;
	char	*word;

	while (is_present(**str, charset) >= 0)
		(*str)++;
	i = 0;
	while ((*str)[i] && is_present((*str)[i], charset) == -1)
		i++;
	if (i == 0)
		return (NULL);
	word = (char *)malloc(i + 1);
	if (!word)
		return (NULL);
	size = i;
	i = 0;
	while (i < size)
	{
		word[i] = (*str)[i];
		i++;
	}
	word[i] = '\0';
	*str += size;
	return (word);
}

char	**ft_split(const char *s, char c)
{
	char	**strs_tab;
	int		word_nb;
	int		index;

	word_nb = count_word(s, c);
	strs_tab = (char **) malloc(sizeof(char *) * (word_nb + 1));
	if (!strs_tab)
		return (0);
	index = 0;
	while (index < word_nb)
	{
		strs_tab[index] = extract_word(&s, c);
		index++;
	}
	strs_tab[index] = 0;
	return (strs_tab);
}
