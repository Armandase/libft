/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:59:11 by adamiens          #+#    #+#             */
/*   Updated: 2022/09/27 10:48:49 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*tmp;
	const char	*cast;

	tmp = (char *)dest;
	cast = (const char *)src;
	i = 0;
	if (dest < src)
	{
		while (i < n)
		{
			tmp[i] = cast[i];
			i++;
		}
		tmp[i] = 0;
	}
	else
	{
		while (n--)
			tmp[n] = cast[n];
	}
	return (dest);
}
