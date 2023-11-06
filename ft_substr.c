#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ret_val;
	size_t	ret_val_len;
	size_t	s_len;

	if (s != NULL)
	{
		s_len = ft_strlen(s);
		if (start > s_len)
			ret_val_len = 0;
		else if (ft_strlen(s + start) > len)
			ret_val_len = len;
		else
			ret_val_len = ft_strlen(s + start);
		ret_val = (char *)malloc(sizeof(char) * (ret_val_len + 1));
		if (ret_val != NULL)
		{
			*ret_val = 0;
			if (start < ft_strlen(s))
				ft_strlcat(ret_val, (s + start), (ret_val_len + 1));
			return (ret_val);
		}
	}
	return (NULL);
}
