#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_ptr;
	size_t			index;

	index = 0;
	s_ptr = (unsigned char *)s;
	while (index++ < n)
	{
		if (*(s_ptr) == (unsigned char) c)
			return ((void *)s_ptr);
		s_ptr++;
	}
	return (NULL);
}
