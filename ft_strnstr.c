/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:10:37 by adamiens          #+#    #+#             */
/*   Updated: 2022/09/27 17:55:33 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check(char *s1, char *s2, int i)
{
	int	j;

	j = 0;
	while (s1[i] == s2[j] && s2[j] != '\0')
	{
		i++;
		j++;
	}
	if (j == ft_strlen(s2))
		return (1);
	else
		return (0);
}

char	*ft_strnstr(const char	*s1, const char	*s2, size_t	len)
{
	size_t	i;

	i = 0;
	if (s1[i] == 0)
		return ((char *)s1);
	while (s1[i] != '\0' && i < len)
	{
		if (s1[i] == s2[0] && ft_check((char *)s1, (char *)s2, i))
			return ((char *)&s1[i]);
		i++;
	}
	return (0);
}
