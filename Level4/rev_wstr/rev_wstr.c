#include <unistd.h>
#include <stdlib.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';

	return (s1);
}

char **ft_split(char *str)
{
	int i;
	int j;
	int k;
	char **out;

	i = 0;
	j = 0;
	k = 0;
	out = malloc(sizeof(char*) * 1000);
	if (!out)
		return (NULL);
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] != '\0' && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (i > j)
		{
			out[k] = malloc(sizeof(char) * 1000);
			ft_strncpy(out[k], &str[j], i - j);
			k++;
		}
	}
	out[k] = NULL;
	return (out);
}

int ft_splitlen(char **str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(int a, char **b)
{
	if (a == 2)
	{
		char	**str;
		int		len;
		int 	i;

		str = ft_split(b[1]);
		len = ft_splitlen(str) - 1;
		while (len >= 0)
		{
			i = 0;
			while (str[len][i])
			{
				write(1, &str[len][i], 1);
				i++;
			}
			len--;
			if (len >= 0)
			   write(1, " ", 1);
		}
	}
	write(1, "\n", 1);

	return (0);
}
