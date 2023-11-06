#include "libft.h"

size_t	ft_strlen(const char *s)
{
	if (*s++)
		return (1 + ft_strlen(s));
	return (0);
}
