/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcespede <fcespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:49:59 by fcespede          #+#    #+#             */
/*   Updated: 2022/10/01 18:23:00 by fcespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	int	i;

	i = 0;
	if (len != '\0' && dst == src)
		return (dst);
	while (len--)
	{
		((char *) dst)[i] = ((char *) src)[i];
		i++;
	}
	return (dst);
}

/*int	main(int argc, char **argv)
{
	printf("%s\n", memcpy(argv[1], argv[2], 9));
	printf("%s\n", ft_memcpy(argv[1], argv[2], 9));
}*/
