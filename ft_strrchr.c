/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcespede <fcespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 10:38:56 by fcespede          #+#    #+#             */
/*   Updated: 2022/10/01 18:27:17 by fcespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	size;

	size = ft_strlen((char *)s) - 1;
	while (size >= 0)
	{
		if (s[size] == (char) c)
			return ((char *) &s[size]);
		size--;
	}
	if (!(unsigned char)c)
		return ((char *) &s[ft_strlen((char *)s)]);
	return (0);
}

/*int	main(int argc, char **argv)
{
	printf("%s\n", ft_strrchr(argv[1], 0));
}*/
