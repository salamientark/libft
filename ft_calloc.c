#include "libft.h"

#define MAX_UINT 65535

void	*ft_calloc(size_t nelem, size_t elsize)
{
	size_t	size;
	void	*mem;

	size = nelem * elsize;
	if (size < MAX_UINT)
	{
		mem = malloc(size);
		if (mem)
			return (memset(mem, '\0', size));
	}
	return (NULL);
}
