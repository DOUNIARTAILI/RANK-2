#include "ft_list.h"

t_list	*ft_lstnew(void *data)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst)
		return ;
	last = ft_lstlast(*lst);
	if (last == NULL)
		*lst = new;
	else
		last->next = new;
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}

int	ft_list_size(t_list *begin_list)
{
	int cpt = 0;
	t_list *tmp;

	tmp = begin_list;
	while (tmp != NULL)
	{
		cpt++;
		tmp = tmp->next;
	}
	return (cpt);
}

int main()
{
	t_list **lst = NULL;
	t_list *ls;
	ls = *lst;
	t_list	*new = ft_lstnew((void *)2);
	t_list	*new1 = ft_lstnew((void *)8);
	t_list	*new2 = ft_lstnew((void *)9);
	ft_lstadd_back(lst, new);
	ft_lstadd_back(lst, new1);
	ft_lstadd_back(lst, new2);
	printf("%d", ft_list_size(ls));
}