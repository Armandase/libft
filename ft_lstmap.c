/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 13:16:25 by adamiens          #+#    #+#             */
/*   Updated: 2022/10/02 14:57:39 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*begin;

	ret = malloc(sizeof(t_list));
	if (!ret)
		return (NULL);
	begin = ret;
	while (lst)
	{
		ret->next = malloc(sizeof(t_list));
		if (!ret->next)
			ft_lstclear(&begin, del);
		ret->content = f(lst->content);
		ret = ret->next;
		lst = lst->next;
	}
	return (begin);
}
