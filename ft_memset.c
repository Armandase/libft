/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:43:42 by adamiens          #+#    #+#             */
/*   Updated: 2022/09/29 17:42:01 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.a"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*tmp;

	tmp = s;
	while (n != 0)
	{
		*tmp = c;
		tmp++;
		n--;
	}
	return (s);
}
