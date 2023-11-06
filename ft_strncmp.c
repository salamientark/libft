#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	pos;

	pos = 0;
	while (pos < n && s1[pos] && s2[pos])
	{
		if ((unsigned char)s1[pos] > (unsigned char)s2[pos])
			return ((int)((unsigned char)s1[pos] - (unsigned char)s2[pos]));
		else if ((unsigned char)s1[pos] < (unsigned char)s2[pos])
			return ((int)(s1[pos] - s2[pos]));
		pos++;
	}
	if (pos < n)
		return ((int)((unsigned char)s1[pos] - (unsigned char)s2[pos]));
	return (0);
}
