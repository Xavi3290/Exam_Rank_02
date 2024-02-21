int	max(int *tab, unsigned int len)
{
	unsigned int i;
	int num;

	if (len == 0)
		return (0);
	i = 0;
	num = tab[0];
	while(i < len)
	{
		if (tab[i] > num)
			num = tab[i];
		i++;
	}
	return (num);
}

#include <stdio.h>

int main(void)
{
	int tab[] = {1,5,2,10,100,8,9};

	printf("%d", max(tab, 3));
	printf("%d", max(tab, 0));
	printf("%d", max(tab, 6));

	return (0);
}
