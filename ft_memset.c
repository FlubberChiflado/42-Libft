/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcespede <fcespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:46:11 by fcespede          #+#    #+#             */
/*   Updated: 2022/10/01 18:22:40 by fcespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	int		size;
	char	*phrase;

	phrase = dest;
	size = 0;
	while (len--)
		phrase[size++] = c;
	return (phrase);
}

/*int	main(int argc, char **argv)
{
	printf("%s\n", memset(argv[1], '$', 7));
	printf("%s\n", memset(argv[2], '0', 3));
	printf("%s\n", ft_memset(argv[1], '$', 7));
	printf("%s\n", ft_memset(argv[2], '0', 3));
}*/
