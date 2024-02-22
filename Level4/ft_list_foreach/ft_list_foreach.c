#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*tmp;

	tmp = begin_list;
	while (tmp)
	{
		(*f)(tmp->data);
		tmp = tmp->next;
	}
}

#include <stdio.h>
#include <stdlib.h>

void print_data(void *data)
{
	printf("%s\n", (char *)data);
}

int main(void)
{
	t_list *n1 = malloc(sizeof(t_list));
	t_list *n2 = malloc(sizeof(t_list));

	n1->data = "Hello";
	n1->next = n2;
	n2->data = "World";
	n2->next = NULL;

	ft_list_foreach(n1, print_data);

	return (0);
}
