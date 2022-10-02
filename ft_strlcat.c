/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:16:43 by adamiens          #+#    #+#             */
/*   Updated: 2022/09/30 14:48:22 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dest, char	*src, size_t size)
{
	size_t	i;
	size_t	lendest;
	size_t	lensrc;

	lendest = 0;
	lensrc = ft_strlen(src);
	while (dest[lendest] != '\0' && lendest < size)
		lendest++;
	if (dest[lendest])
		return (size + lensrc);
	lensrc = ft_strlen(src);
	i = 0;
	while (src[i] != '\0' && (lendest + i + 1) < size)
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[i + lendest] = '\0';
	return (lendest + lensrc);
}
