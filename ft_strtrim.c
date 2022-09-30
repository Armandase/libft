/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:58:04 by adamiens          #+#    #+#             */
/*   Updated: 2022/09/30 10:40:20 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_inset(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_begin(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (ft_inset(set, s1[i]) == 1)
			j++;
		else
			return (j);
		i++;
	}
	return (j);
}

int	ft_end(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen((char *)s1) - 1;
	while (i < j)
	{
		if (ft_inset(set, s1[j]) == 1)
			i++;
		else
			return (i);
		j--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*str;
	int		j;
	int		start;
	int		end;

	i = 0;
	start = ft_begin(s1, set);
	end = ft_end(s1, set);
	j = ft_strlen((char *)s1) - (ft_begin(s1, set) + ft_end(s1, set));
	str = malloc(sizeof(char) * j + 1);
	while (i < j && (start + i) < (ft_strlen((char *)s1) - end))
	{
		str[i] = s1[start + i];
		i++;
	}
	return (str);
}
