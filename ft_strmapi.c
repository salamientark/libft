#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	index;
	size_t			s_len;

	if (!s || !f)
		return (NULL);
	s_len = ft_strlen(s);
	new_str = (char *)malloc(sizeof(char) * (s_len + 1));
	if (!new_str)
		return (NULL);
	new_str[s_len] = 0;
	index = 0;
	while (index < s_len)
	{
		new_str[index] = f(index, s[index]);
		index++;
	}
	return (new_str);
}
