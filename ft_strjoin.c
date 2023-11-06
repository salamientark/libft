#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*ret_str;

	if (s1 == NULL)
		return ((char *)s2);
	if (s2 == NULL)
		return ((char *)s1);
	ret_str = (char *)
		malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ret_str)
		return (NULL);
	*ret_str = 0;
	ft_strlcat(ret_str, s1, ft_strlen(s1) + 1);
	ft_strlcat(ret_str + (ft_strlen(s1)), s2, ft_strlen(s2) + 1);
	return (ret_str);
}
