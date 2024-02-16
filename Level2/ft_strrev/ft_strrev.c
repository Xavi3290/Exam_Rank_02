char	*ft_strrev(char *str)
{
	int i;
	int j;
	char aux;

	i = 0;
	j = 0;
	while(str[i] != '\0')
		i++;
	i--;
	while(j < i)
	{
		aux = str[j];
		str[j] = str[i];
		str[i] = aux;
		i--;
		j++;
	}
	return (str);
}

#include <stdio.h>

int main(int a, char **b)
{
	if (a == 2)
		ft_strrev(b[1]);
    	printf ("%s\n", b[1]);
}
