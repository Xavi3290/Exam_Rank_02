#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*ptr;
	int i;
	int len;

	if (end >= start)
		len = end - start + 1;
	else
		len = start - end + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	i = 0;
	while(i < len)
	{
		if (start < end)
		{
			ptr[i] = end;
			end--;
			i++;
		}
		else
		{
			ptr[i] = end;
			end++;
			i++;
		}
	}
	return (ptr);
}

#include <stdio.h>

int main(void)
{
	int i;

	i = 0;
	int *ptr = ft_rrange(0,0);
	int len =  0 + 0 + 1;
	while(i < len)
	{
		printf("%d", ptr[i]);
		i++;
	}

	return (0);
}
