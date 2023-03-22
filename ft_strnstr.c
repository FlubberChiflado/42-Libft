/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcespede <fcespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:12:40 by fcespede          #+#    #+#             */
/*   Updated: 2022/10/02 11:32:00 by fcespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	compare(const char *h, const char *needle, size_t i, size_t len)
{
	size_t	j;
	size_t	count;

	j = 0;
	count = 0;
	while (needle[j] != '\0' && j < (len - i) && h[i + j] != '\0')
	{
		if (needle[j] == h[i + j])
			count++;
		j++;
	}
	return (count);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (needle[0] == '\0')
		return ((char *) haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			if (compare(haystack, needle, i, len) == ft_strlen(needle))
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}

/*int	main(int argc, char **argv)
{
	char *phrase = "abc";

	printf("%s\n", strnstr(phrase, "abcdef", 5));
	printf("%s\n", phrase);
	printf("%s\n", ft_strnstr(phrase, "abcdef", 5));
	printf("%s\n", phrase);
}*/
