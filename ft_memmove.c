/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcespede <fcespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:19:36 by fcespede          #+#    #+#             */
/*   Updated: 2022/10/01 18:23:11 by fcespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				size;
	unsigned char		*d;
	unsigned const char	*s;

	size = 0;
	d = dst;
	s = src;
	if (dst == src)
		return (dst);
	if (dst < src)
	{
		while (size < len)
		{
			d[size] = s[size];
			size++;
		}
	}
	else
	{
		while (len--)
			d[len] = s[len];
	}
	return (dst);
}
