#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while(s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
	{
		if (ft_strchr(accept, s[i]) == 0)
			break;
		i++;
	}
	return (i);
}

#include <string.h>

int main(void)
{
	printf("%lu\n", strspn("hola"," hola"));
	printf("%lu\n", ft_strspn("hola", "hola"));
	printf("%lu\n", strspn("hola", "adeu"));
	printf("%lu\n", ft_strspn("hola", "adeu"));
	printf("%lu\n", strspn("hola", "hoji"));
	printf("%lu\n", ft_strspn("hola", "hoji"));

	return (0);
}
