void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int 			aux;

	i = 0;
	while (i < (size - 1))
	{
		if(tab[i] > tab[i + 1])
		{
			aux = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = aux;
			i = 0;
		}
		else
			i++;
	}
}

#include <stdio.h>

int main(void)
{
	int a[] ={3, 1, 5 , 2, 0};
	int i;

	sort_int_tab(a, 4);
	i = 0;
	while (a[i])
	{
		printf("%d", a[i]);
		i++;
	}

	return (0);
}
