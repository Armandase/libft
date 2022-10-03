/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:46:28 by adamiens          #+#    #+#             */
/*   Updated: 2022/10/03 14:32:42 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_totalen(char const *s, char c)
{
	int	i;
	int	counter;

	counter = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
			if (s[i] == '\0')
				return (counter);
			counter++;
		}
		i++;
	}
	return (counter);
}

int	ft_wordlen(const char *str, char c, int i)
{
	int	counter;

	counter = 0;
	while (str[counter + i] != c && str[counter + i])
		counter++;
	return (counter);
}

char	*ft_strccopy(char *dest, char c, char *src, int index)
{
	
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		j;
	int		k;

	if (!s)
		return (NULL);
	strs = malloc(sizeof(char *) * (ft_totalen(s, c) + 1));
	if (!strs)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		strs[k] = malloc(ft_wordlen(s, c, i) + 1);
		if (!strs[k])
			return (NULL);
		while (s[i] != c && s[i])
			strs[k][j++] = s[i++];
		strs[k++][j] = '\0';
	}
	strs[k] = NULL;
	return (strs);
}
