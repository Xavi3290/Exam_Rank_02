#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int *ptr;
	int len;
	int i;

	if(end >= start)
		len = end - start + 1;
	else
		len = start - end + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	i = 0;
	while(i < len)
	{
		ptr[i] = start;
		start++;
		i++;
	}
	return (ptr);
}
