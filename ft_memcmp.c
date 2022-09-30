/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:43:54 by adamiens          #+#    #+#             */
/*   Updated: 2022/09/30 13:06:35 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*tmp1;
	const char	*tmp2;

	tmp1 = s1;
	tmp2 = s2;
	i = 0;
	if (!n)
		return (0);
	while (tmp1[i] == tmp2[i] && (tmp1[i] != '/0') && (tmp2[i] != '\0'))
	{
		if (i >= n)
			break ;
		i++;
	}
	return (tmp1[i] - tmp2[i]);
}
