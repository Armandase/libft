/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:49:47 by adamiens          #+#    #+#             */
/*   Updated: 2022/09/28 18:02:24 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*calloc(size_t nmemb, size_t size)
{
	char	*ret;
	size_t	i;

	i = 0;
	if (size == 0 || nmemb == 0)
		return (0);
	if (size * nmemb > 2147483647)
		return (0);
	ret = malloc(size * nmemb);
	while (i < size)
	{
		ret[i] = 0;
		i++;
	}
	return ((void *)ret);
}
