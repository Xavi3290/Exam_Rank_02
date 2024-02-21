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
		if (start < end)
		{
			ptr[i] = start;
			start++;
			i++;
		}
		else
		{
			ptr[i] = start;
			start--;
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
	int *ptr = ft_range(2,-1);
	int len = 2 - (-1) + 1;
	while(i < len)
	{
		printf("%d", ptr[i]);
		i++;
	}

	return (0);
}
