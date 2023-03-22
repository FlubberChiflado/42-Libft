/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcespede <fcespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:13:16 by fcespede          #+#    #+#             */
/*   Updated: 2022/10/01 18:22:51 by fcespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	int		size;
	char	*phrase;

	phrase = b;
	size = 0;
	while (len--)
		phrase[size++] = 0;
}

/*int	main(int argc, char **argv)
{
	char	phrase[15] = "frankcespedes";

	bzero(phrase, 1);
	printf("%s\n", phrase);
	bzero(phrase, 0);
	printf("%s\n", phrase);
	ft_bzero(phrase, 1);
	printf("%s\n", phrase);
	ft_bzero(phrase, 0);
	printf("%s\n", phrase);
}*/
