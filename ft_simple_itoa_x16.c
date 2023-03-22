/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcespede <fcespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:01:08 by fcespede          #+#    #+#             */
/*   Updated: 2023/03/04 11:36:26 by fcespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

static int	ft_zero(int len)
{
	int	zero;

	zero = 1;
	while (len-- > 1)
		zero *= 10;
	return (zero);
}

static int	ft_len(int n, int len)
{
	while (n / 10 > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_simple_itoa_x16(int n)
{
	int		len;
	int		zero;
	int		i;
	char	*str;

	i = 0;
	len = ft_len(n, 1);
	zero = ft_zero(len);
	str = malloc(sizeof(char) * 9);
	if (!str)
		return (NULL);
	len = 16 - len;
	while (len-- != 0)
		str[i++] = '0';
	while (zero >= 1)
	{
		str[i++] = ((n / zero) % 10) + '0';
		zero /= 10;
	}
	str[i] = '\0';
	return (str);
}
