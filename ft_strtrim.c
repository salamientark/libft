#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	unsigned int	end_word;
	unsigned int	begin_word;

	if (!s1)
		return (NULL);
	begin_word = 0;
	while (*(s1 + begin_word) && ft_strchr(set, *(s1 + begin_word)))
		begin_word++;
	if (!(*(s1 + begin_word)))
		return (ft_strndup("", 2));
	end_word = ft_strlen(s1);
	while (ft_strrchr(set, *(s1 + end_word - 1)))
		end_word--;
	return (ft_strndup((s1 + begin_word), (end_word - begin_word)));
}
