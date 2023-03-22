/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcespede <fcespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:43:01 by fcespede          #+#    #+#             */
/*   Updated: 2022/09/20 11:46:43 by fcespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*string1;
	unsigned const char	*string2;

	string1 = s1;
	string2 = s2;
	while (n--)
	{
		if (*string1 != *string2)
			return (*string1 - *string2);
		string1++;
		string2++;
	}
	return (0);
}

/*int	main(int argc, char **argv)
{
	printf("%d\n", memcmp(argv[1], argv[2], 6));
	printf("%d\n", ft_memcmp(argv[1], argv[2], 6));
}*/
