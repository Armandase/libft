
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;

	ret = malloc(sizeof(t_list) * ft_stsize(lst));
	if (!ret)
		return (NULL);
	while (lst)
	{
		f(lst->content);
		ret->next = ft_lstnew(lst->content);
		ret = ret->next;
		lst = lst->next;
	}
	return (ret);
}
