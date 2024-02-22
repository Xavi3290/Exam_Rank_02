#include <stdio.h>
#include <stdlib.h>

size_t ft_numlen(long num)
{
	size_t len;

	len = 0;
	if (num == 0)
	{
		len++;
		return (len);
	}
	if (num < 0)
	{
		len++;
		num *= -1;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	long 	num;
	size_t 	len;
	char	*str;

	num = nbr;
	len = ft_numlen(num);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	if (num == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (num < 0)
	{
		num *= -1;
		str[0] = '-';
	}
	while (num > 0)
	{
		str[len] = num % 10 + '0';
		num /= 10;
		len--;
	}
	return (str);
}

int main(void)
{
	printf("%s", ft_itoa(5));

	return (0);
}
