/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcespede <fcespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:20:37 by fcespede          #+#    #+#             */
/*   Updated: 2022/10/01 18:27:52 by fcespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (((unsigned char *) b)[i] == (unsigned char) c)
			return ((char *) &b[i]);
		i++;
	}
	return (0);
}

/*int	main(int argc, char **argv)
{
	printf("%s\n", ft_memchr(argv[1], 'z', 10));
}*/
