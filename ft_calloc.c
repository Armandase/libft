/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:34:10 by adamiens          #+#    #+#             */
/*   Updated: 2022/09/30 09:39:29 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	char	*ret;

	if (nmemb == 0 || size == 0)
		return (0);
	if (nmemb * size > 2147483647)
		return (0);
	ret = malloc(nmmeb * size);
	while (size)
	{
		*ret = 0;
		size--;
		ret++;
	}
	return ((void *)ret);
}
