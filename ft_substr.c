/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:16:46 by adamiens          #+#    #+#             */
/*   Updated: 2022/09/29 17:49:26 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.a"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (i < start)
		i++;
	str = malloc(sizeof(char)* (len + 1));
	if (!str || len == 0)
		return (0);
	while (counter < len && s[i] != '\0')
	{
		str[counter] = s[i];
		counter++;
		i++;
	}
	return (str);
}
