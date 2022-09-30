/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:46:28 by adamiens          #+#    #+#             */
/*   Updated: 2022/09/29 17:54:44 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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
	while (str[counter + i] != c)
		counter++;
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		j;
	int		k;

	i = ft_totalen(s, c);
	strs = malloc(sizeof(char *) * (i + 1));
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
		while (s[i] != c && s[i])
			strs[k][j++] = s[i++];
		strs[k][j] = '\0';
		k++;
	}
	strs[k] = 0;
	return (strs);
}
#include <stdio.h>
int main(int argc, char **argv)
{
    (void)argc;
    char    **strs;
    int j = ft_totalen(argv[1], argv[2][0]);
    strs = ft_split(argv[1], argv[2][0]);
    for(int i = 0; i < j; i++)
    {
        printf("%s\n", strs[i]);
    }
    return (0);
}
