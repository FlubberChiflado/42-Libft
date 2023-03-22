/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcespede <fcespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:17:31 by fcespede          #+#    #+#             */
/*   Updated: 2022/10/02 11:13:55 by fcespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*int	main(void)
{
	int	letter1;
	int	letter2;

	letter1 = '1';
	letter2 = 'c';
	printf("letter1 = %d\n", isalpha(letter1));
	printf("letter2 = %d\n", isalpha(letter2));
	printf("ft_isalpha - letter1 = %d\n", isalpha(letter1));
	printf("ft_isalpha - letter2 = %d\n", isalpha(letter2));
}*/
