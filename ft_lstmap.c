
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;

	ret = malloc(sizeof(t_list) * ft_lstsize(lst));
	if (!ret)
		return (NULL);
	while (lst)
	{
		if (!(f(lst->content)))
			del(lst->content);
		ret->next = ft_lstnew(lst->content);
		ret = ret->next;
		if (!(ret->content))
			del(lst->content);
		lst = lst->next;
	}
	return (ret);
}
