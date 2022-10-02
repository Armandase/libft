/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:16:46 by adamiens          #+#    #+#             */
/*   Updated: 2022/10/02 11:04:13 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	if (len == 0 || start >= ft_strlen(s))
		return (0);
	while (i < start)
		i++;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (counter < len && s[i] != '\0')
	{
		str[counter] = s[i];
		counter++;
		i++;
	}
	str[counter] = '\0';
	return (str);
}
