/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:10:41 by adamiens          #+#    #+#             */
/*   Updated: 2022/09/30 10:39:05 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

static size_t	ft_strsize(const char	*s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t	size)
{
	size_t	lensrc;

	lensrc = ft_strsize(src);
	if (size == 0)
		return (lensrc);
	while (--size && *src)
	{
		*dst++ = *src++;
	}
	*dst = '\0';
	return (lensrc);
}
