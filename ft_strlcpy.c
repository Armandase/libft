/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:10:41 by adamiens          #+#    #+#             */
/*   Updated: 2022/09/30 10:13:45 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

static size_t	ft_strsize(const char	*s)
{
	int i;
	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t	size)
{
	size_t	lensrc;

	lensrc = ft_strsize(src);
	while(size-- && *src)
		*dst++ = *src++;
	return (lensrc);
}
#include <stdio.h>
#include <bsd/string.h>
int main ()
{
	const char src[10] =  "0123456789";
	char	dest[5] = "22233";
	char src2[10] =  "0123456789";
	char	dest2[5] = "22233";
	printf("mien : %ld \nvrai : %ld\n", ft_strlcpy(dest, src, 15), strlcpy(dest2, src2, 15));
	printf("mien : %s\n", dest);
	printf("vrai : %s\n", dest2);
	
	return (0); 
}
