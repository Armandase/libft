
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	tmp;

	tmp = *lst;
	while (*lst)
	{
		ft_lstdelone(*lst, del);
		(*lst) = (*lst)->next;
	}
	tmp = NULL;
}
