/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:16:43 by adamiens          #+#    #+#             */
/*   Updated: 2022/09/30 10:17:55 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char	*dest, char	*src, size_t	size)
{
	size_t	i;
	size_t	lendest;
	size_t	lensrc;

	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	i = 0;
	while (src[i] != '\0')
	{
		dest[lendest] = src[i];
		lendest++;
		i++;
		if (lendest == size -1)
			break ;
	}
	dest[i] = '\0';
	return (lendest + lensrc);
}
