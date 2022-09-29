/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:42:28 by adamiens          #+#    #+#             */
/*   Updated: 2022/09/29 17:45:51 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.a"

int	strncmp(const char *s1, const char *s2, size_t n)
{
	int unsigned	i;

	i = 0;
	if (!n)
		return (0);
	while (s1[i] == s2[i] && (s1[i] != '\0'))
	{
		if (i++ >= n)
			break ;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
