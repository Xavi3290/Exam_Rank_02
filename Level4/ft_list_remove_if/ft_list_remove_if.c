#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;
	t_list *del;
	t_list *prev;

	if  (*begin_list == NULL)
		return;
	tmp = *begin_list;
	prev = NULL;
	while (tmp)
	{
		if(cmp(tmp->data, data_ref) == 0)
		{
			del = tmp;
			if (prev == NULL)
				*begin_list = tmp->next;
			else
				prev->next = tmp->next;
			tmp = tmp->next;
			free(del);
		}
		else
		{
			prev = tmp;
			tmp = tmp->next;
		}
	}
}

#include <stdio.h>
#include <string.h>

void	print_list(t_list **begin_list)
{
 	t_list *cur = *begin_list;
 	while (cur != 0)
 	{
 		printf("%s\n", cur->data);
 		cur = cur->next;
 	}
}

int		main(void)
{
 	t_list *n1 = malloc(sizeof(t_list));
	t_list *n2 = malloc(sizeof(t_list));

	n1->data = "Hello";
	n1->next = n2;
	n2->data = "World";
	n2->next = NULL;

	print_list(&n1);
	ft_list_remove_if(&n1, "Hello", strcmp);
	print_list(&n1);
}
