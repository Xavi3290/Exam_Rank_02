#include <stdio.h>
#include <stdlib.h>

int main(int a, char **b)
{
	if (a == 2)
	{
		int num;
		int i;

		i = 2;
		num = atoi(b[1]);
		if (num == 1)
			printf("1");
		while(num >= i)
		{
			if (num % i == 0)
			{
				printf("%d", i);
				if (num == i)
					break;
				printf("*");
				num /= i;
				i = 1;
			}
			i++;
		}
	}
	printf("\n");

	return (0);
}
