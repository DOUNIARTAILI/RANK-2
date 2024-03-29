#include "ft_list.h"

// Write a function called ft_list_remove_if that removes from the
// passed list any element the data of which is "equal" to the reference data.
// cmp takes two void* and returns 0 when both parameters are equal.

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp;
	tmp = *begin_list;
	t_list *curr;

	if (begin_list == NULL || *begin_list == NULL)
		return;
	while (tmp != NULL)
	{
		if (cmp(tmp->next->data, data_ref) == 0)
		{	
			curr = tmp->next->next;
			free(tmp->next);
			tmp->next = curr;
		}
		tmp = tmp->next;
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
	char straa[] = "String aa";
	t_list *aa = malloc(sizeof(t_list));
	aa->next = 0;
	aa->data = straa;

	char strbb[] = "String bb";
	t_list *bb = malloc(sizeof(t_list));
	bb->next = 0;
	bb->data = strbb;

	char strcc[] = "String cc";
	t_list *cc = malloc(sizeof(t_list));
	cc->next = 0;
	cc->data = strcc;

	char strdd[] = "String dd";
	t_list *dd = malloc(sizeof(t_list));
	dd->next = 0;
	dd->data = strdd;

	aa->next = bb;
	bb->next = cc;
	cc->next = dd;

	t_list **begin_list = &aa;

	print_list(begin_list);
	printf("----------\n");
	ft_list_remove_if(begin_list, straa, strcmp);
	print_list(begin_list);
}