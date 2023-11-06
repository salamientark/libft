#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	index;
	size_t	init_dst_len;
	size_t	src_pos;

	if (siz != 0)
	{
		src_pos = 0;
		init_dst_len = ft_strlen((const char *)dst);
		index = 0;
		while (dst[index] && index < siz)
			index++;
		while (src[src_pos] && index < siz - 1)
			dst[index++] = src[src_pos++];
		if (siz > init_dst_len)
		{
			dst[index] = '\0';
			return (ft_strlen(src) + init_dst_len);
		}
	}
	return (ft_strlen(src) + siz);
}
