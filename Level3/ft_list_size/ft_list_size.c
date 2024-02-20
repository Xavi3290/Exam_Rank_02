#include "ft_list.h"

int	ft_list_size(t_list	*begin_list)
{
	int i;
	t_list *tmp;

	i = 0;
	tmp = begin_list;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

#include <stdio.h>

int main(void)
{
	t_list n3 = {NULL, (void*)3};
	t_list n2 = {&n3, (void*)2};
	t_list n1 = {&n2, (void*)1};
	t_list *beg_list = &n1;

	printf("%d", ft_list_size(beg_list));

	t_list n4 = {NULL, (void*)4};
	n3.next = &n4;

	printf("%d", ft_list_size(beg_list));

	return (0);
}
