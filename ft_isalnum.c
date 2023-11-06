#include "libft.h"

int	ft_isalnum(int c)
{
	return (((65 <= c && c <= 90) || (97 <= c && c <= 122)) || ft_isdigit(c));
}
