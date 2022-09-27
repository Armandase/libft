/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:10:41 by adamiens          #+#    #+#             */
/*   Updated: 2022/09/27 19:20:35 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include <stdio.h>
size_t	ft_strlcpy(char *dst, const char *src, size_t	size)
{
	size_t	i;
	size_t	ret;
	ret = 0;
	while(src[ret])
		ret++;
	printf("%ld\n", ret);

	i = 0;
	if (size <= 0)
		return (0);
	while (i < (size - 1))
	{
		if (src[i] != '\0')
			dst[i] = src[i];
		else
			dst[i] = '\0' ;
		i++;
	}
	dst[i] = '\0';
	ret = 0;
	while(src[ret])
		ret++;
	printf("%ld", ret);
	return (ret);
}
#include <stdio.h>
#include <bsd/string.h>
int main ()
{
	const char src[25] =  "sourceghghghghghghghghghg";
	char	dest[11] = "destinqtion";
	char src2[25] =  "sourceghghghghghghghghghg";
	char	dest2[11] = "destinqtion";
	printf("mien%ld \nvrai%ld", ft_strlcpy(dest, src, 15), strlcpy(dest2, src2, 15));
	return (0); 
}
