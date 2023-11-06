#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*s_end;

	s_end = s + ft_strlen(s);
	while (*s_end != (char) c)
	{
		if (s_end-- == s)
			return (NULL);
	}
	return ((char *)s_end);
}
