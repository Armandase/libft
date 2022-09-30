/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:26:22 by adamiens          #+#    #+#             */
/*   Updated: 2022/09/30 12:31:33 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*ret;

	if (nmemb == 0 || size == 0)
		return (0);
	if ((nmemb * size) > 2147483647)
		return (0);
	i = 0;
	ret = malloc(nmemb * size);
	while (i < nmemb)
		ret[i++] = 0;
	return ((void *)ret);
}
