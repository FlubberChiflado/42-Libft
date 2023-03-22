/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcespede <fcespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:38:50 by fcespede          #+#    #+#             */
/*   Updated: 2022/10/01 18:26:27 by fcespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char) c)
			return ((char *) &s[i]);
		i++;
	}
	if (!(unsigned char)c)
		return ((char *) &s[i]);
	return (0);
}

/*int	main(int argc, char **argv)
{
	printf("%s\n", ft_strchr(0x103adda40: "teste", 1024: '\0'));
}*/
