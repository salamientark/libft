#include "libft.h"

#include <stdio.h>

static	unsigned int	word_nb(const char *s, char c)
{
	unsigned int	word_count;
	size_t			new_word;
	const char		*s_ptr;

	new_word = 1;
	s_ptr = s;
	word_count = 0;
	while (*s_ptr)
	{
		if (*s_ptr != c && new_word)
		{
			new_word = 0;
			word_count++;
		}
		if (*s_ptr == c && !new_word)
			new_word = 1;
		s_ptr++;
	}
	return (word_count);
}

static void	ft_split_abort(char ***str_tab_ptr, unsigned int size)
{
	while (size > 0)
	{
		free(*(str_tab_ptr[size]));
		*(str_tab_ptr[size--]) = 0;
	}
	free(*str_tab_ptr);
	*str_tab_ptr = 0;
}

static char	*put_next_word(const char *s, size_t *start, char c)
{
	size_t	word_size;
	char	*new_word;

	word_size = 0;
	while (s[*start] && s[*start] == c)
		(*start)++;
	if (s[*start])
	{
		while (s[*start + word_size] && s[*start + word_size] != c)
			word_size++;
	}
	new_word = ft_substr(s, *start, word_size);
	*start = *start + word_size;
	return (new_word);
}

static char	**ft_split_aux(char **str_tab, const char *s, size_t str_tab_len,
	char c)
{
	size_t	str_tab_index;
	size_t	s_index;

	str_tab_index = 0;
	s_index = 0;
	while (str_tab_index < str_tab_len)
	{
		str_tab[str_tab_index] = put_next_word(s, &s_index, c);
		if (!str_tab[str_tab_index])
		{
			ft_split_abort(&str_tab, (unsigned int)str_tab_index);
			return (NULL);
		}
		str_tab_index++;
	}
	str_tab[str_tab_index] = 0;
	return (str_tab);
}

char	**ft_split(const char *s, char c)
{
	char			**str_tab;
	unsigned int	str_tab_len;

	if (s)
	{
		str_tab_len = word_nb(s, c);
		str_tab = (char **)malloc(sizeof(char *) * (str_tab_len + 1));
		if (str_tab)
		{
			str_tab = ft_split_aux(str_tab, s, str_tab_len, c);
			return (str_tab);
		}
	}
	return (NULL);
}
