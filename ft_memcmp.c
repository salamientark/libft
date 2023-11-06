#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_ptr;
	unsigned char	*s2_ptr;
	size_t			index;

	s1_ptr = (unsigned char *)s1;
	s2_ptr = (unsigned char *)s2;
	index = 0;
	while (index++ < n)
	{
		if (*s1_ptr > *s2_ptr)
			return ((int)(*s1_ptr - *s2_ptr));
		if (*s1_ptr < *s2_ptr)
			return ((int)(*s1_ptr - *s2_ptr));
		s1_ptr++;
		s2_ptr++;
	}
	return (0);
}
