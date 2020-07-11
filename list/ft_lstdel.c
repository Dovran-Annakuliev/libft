#include "lib_lst.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *point;
	t_list *tmp;

	if (!*alst && !del)
		return ;
	point = *alst;
	while (point)
	{
		tmp = point->next;
		ft_lstdelone(&point, del);
		point = tmp;
	}
	*alst = NULL;
}
