/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:16:43 by adamiens          #+#    #+#             */
/*   Updated: 2022/09/27 18:07:44 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

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
#include <stdio.h>
#include <bsd/string.h>
#include <string.h>
int main()
{
	char src[] = "debut";
	char dest[50] = "fingure";
	size_t size = 7;
	char src1[] = "debut";
	char dest1[50] = "fingure";
	size_t size1 = 7;

    // Affiche : "debutfin"
	printf("%ld", ft_strlcat(dest, src, size));
	printf("%ld", strlcat(dest1, src1, size1));
	
	return 0;
}
