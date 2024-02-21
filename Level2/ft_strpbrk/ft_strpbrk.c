char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i;
	int j;

	if (!s1 || !s2)
		return (0);
	i = 0;
	while(s1[i] != '\0')
	{
		j = 0;
		while(s2[j] != '\0')
		{
			if (s1[i] == s2[j])
				return ((char*)&s1[i]);
			j++;
		}
		i++;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
	printf("%s\n", strpbrk("holaaart", "adeu"));
	printf("%s\n", ft_strpbrk("holaaart", "adeu"));
	printf("%s\n", strpbrk("paco", "adeu"));
	printf("%s\n", ft_strpbrk("paco", "adeu"));
	printf("%s\n", strpbrk(NULL, "adeu"));
	printf("%s\n", ft_strpbrk(NULL, "adeu"));

	return (0);
}
