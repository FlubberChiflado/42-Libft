/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcespede <fcespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:47:15 by fcespede          #+#    #+#             */
/*   Updated: 2022/10/01 18:25:20 by fcespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	ldst;
	unsigned int	i;

	ldst = ft_strlen(dst);
	i = 0;
	if (dstsize <= ldst)
		return (dstsize + ft_strlen((char *) src));
	while (src[i] && (ldst + 1 < dstsize))
	{
		dst[ldst] = src[i];
		i++;
		ldst++;
	}
	dst[ldst] = '\0';
	return (ft_strlen(dst) + ft_strlen(&((char *) src)[i]));
}
