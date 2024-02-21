#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i;
	size_t j;

	i = 0;
	while(s[i] != '\0')
	{
		j = 0;
		while(reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
	printf("%zu", strcspn("hola", "kikula"));
	printf("%zu", ft_strcspn("hola", "kikula"));

	return (0);
}
