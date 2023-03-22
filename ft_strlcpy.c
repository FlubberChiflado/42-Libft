/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcespede <fcespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:53:53 by fcespede          #+#    #+#             */
/*   Updated: 2022/10/02 11:16:15 by fcespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	aux;

	aux = 0;
	if (dstsize > 0)
	{
		while (src[aux] != '\0' && aux < dstsize - 1)
		{
			dst[aux] = src[aux];
			aux++;
		}
		dst[aux] = '\0';
	}
	while (src[aux] != '\0')
		aux++;
	return (aux);
}

/*int main()
{
	char string[] = "Hello there, Venus";
    char buffer[12];
    int r;
	unsigned int c, z;

	ft_strlcpy(buffer,string, 19);
    printf("Copied '%s' into '%s', length %d\n", string, buffer, r);
    c = ft_strlcpy(buffer,string, 5);
	z = strlcpy(buffer,string, 5);
//	printf("Copied '%s' into '%s', length %d\n", string, buffer, r);
	printf("%d y %d\n", c, z);
	printf("%s\n", buffer);


    return(0);
}*/
