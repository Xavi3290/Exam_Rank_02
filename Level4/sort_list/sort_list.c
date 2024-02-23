#include "sort_list.h"

t_list *sort_list(t_list *lst, int (*com)(int, int))
{
	t_list *start;
	int 	swap;

	start = lst;
	while (lst->next)
	{
		if ((*com)(lst->data, lst->next->data) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = start;
		}
		else
			lst = lst->next;
	}
	lst = start;
	return (lst);
}

#include <stdio.h>
#include <stdlib.h>

int ascending(int a, int b)
{
     return (a <= b);
}

int main(void)
{
	t_list *n1 = malloc(sizeof(t_list));
	t_list *n2 = malloc(sizeof(t_list));
	t_list *n3 = malloc(sizeof(t_list));

	n1->data = 3;
	n1->next = n2;
	n2->data = 2;
	n2->next = n3;
	n3->data = 1;
	n3->next = NULL;

	t_list *sort = sort_list(n1, ascending);
	while (sort)
	{
		printf("%d", sort->data);
		sort = sort->next;
	}
}
