/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcespede <fcespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:27:47 by fcespede          #+#    #+#             */
/*   Updated: 2022/10/02 11:50:25 by fcespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_len(char const *s, unsigned int start, size_t len)
{
	size_t	longitud;

	longitud = 0;
	if (ft_strlen(s) == 0 || (ft_strlen(s) == start && len == 1))
		longitud = 0;
	else if (len > ft_strlen(s) || start + len == ft_strlen(s) + 1)
		longitud = ft_strlen(s) - start;
	else
		longitud = len;
	return (longitud);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	t_uint	i;
	char	*str;
	size_t	j;

	i = start;
	j = 0;
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	len = ft_len(s, start, len);
	if (!s)
		return (NULL);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	while (s[i] && j < len)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

/*int	main(void)
{
	printf("%s\n", ft_substr("hola", 0, 18446744073709551615));
}*/
