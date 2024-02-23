#include <unistd.h>
#include <stdlib.h>

char	*ft_strncpy(char *s1, char *s2, int n)
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

char	**ft_split(char *str)
{
	int 	i;
	int 	j;
	int 	k;
	char	**out;

	i = 0;
	k = 0;
	j = 0;
	out = malloc(sizeof(char*) * 1000);
	while(str[i] != '\0')
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

int main(int a, char **b)
{
	if (a > 1 && b[1])
	{
		char 	**str;
		int		i;
		int 	j;

		i = 1;
		str = ft_split(b[1]);
		while (str[i])
		{
			j = 0;
			while(str[i][j])
			{
				write(1, &str[i][j], 1);
				j++;
			}
			i++;
			write(1, " ", 1);
		}
		j = 0;
		while (str[0][j])
		{
			write(1, &str[0][j], 1);
		   j++;
		}

	}
	write(1, "\n", 1);

	return (0);
}
