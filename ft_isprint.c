/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcespede <fcespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:10:52 by fcespede          #+#    #+#             */
/*   Updated: 2022/10/01 18:22:18 by fcespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}

/*int	main(void)
{
	char	letter1;
	int		letter2;

	letter1 = 127;
	letter2 = 'I';
	printf("letter1 = %d\n", isprint(letter1));
	printf("letter2 = %d\n", isprint(letter2));
	printf("ft_isprint - letter1 = %d\n", ft_isprint(letter1));
	printf("ft_isprint - letter2 = %d\n", ft_isprint(letter2));
}*/
