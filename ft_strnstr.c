/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:10:37 by adamiens          #+#    #+#             */
/*   Updated: 2022/09/30 19:38:38 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strnstr(const char	*s1, const char	*s2, size_t	len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(s2) == 0 && !len)
		return ((char *)s1);
	while (s1[i] != '\0' && i < len)
	{
		j = 0;
		while (s1[i + j] == s2[j] && (j + i) < len)
		{
			if (!s2[j])
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (0);
}
