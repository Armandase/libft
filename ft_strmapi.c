/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:40:24 by adamiens          #+#    #+#             */
/*   Updated: 2022/09/30 10:15:16 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ret;

	i = 0;
	ret = malloc(ft_strlen((char *)s) + 1);
	if (!ret)
		return (0);
	while (ret[i] != '\0')
	{
		ret[i] = f(i, ret[i]);
		i++;
	}
	return (ret);
}
