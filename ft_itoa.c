/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adamiens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:01:26 by adamiens          #+#    #+#             */
/*   Updated: 2022/09/29 17:54:02 by adamiens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

int	ft_lenint(int n)
{
	int	i;

	i = 1;
	if (n < 0)
		i++;
	if (n < 10)
		return (i);
	while (n > 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_negative(int n, char *ret, int nlen)
{
	int	counter;
	
	counter = -1;
	if (n == 0)
	{
		ret[0] = '0';
		return (ret);
	}
	n *= -1;
	ret[0] = '-';
	while (n > 0)
	{
		ret[(nlen - 1) - counter] = n % 10 + '0';
		n /= 10;
		counter++;
	}
	return (ret);
}

char	*ft_itoa(int n)
{
	size_t	i;
	int 	counter;
	char	*ret;
	int		nlen;

	nlen = ft_lenint(n);
	ret = malloc(nlen + 1);
	counter = 0;
	i = n;
	if (n <= 0)
	{
		ret = ft_negative(n, ret, nlen);
		return (ret);
	}
	while (i > 0)	
	{
		ret[(nlen - 1) - counter] = i % 10 + '0';
		counter++;
		i /= 10;
	}
	return (ret);
}

#include <stdio.h>
int main ()
{
	char *co;
	int te = -27483648;
	co = ft_itoa(te);
	printf("%s", co);
}
