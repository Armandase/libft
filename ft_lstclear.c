
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	tmp = *lst;
	while (tmp)
	{
		ft_lstdelone(tmp, del);
		tmp = tmp->next;
	}
	*lst = NULL;
}
