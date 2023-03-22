/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcespede <fcespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:13:04 by fcespede          #+#    #+#             */
/*   Updated: 2022/10/01 18:10:23 by fcespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*int	main(void)
{
	int	num1;
	int	num2;
	int	num0;

	num0 = 4;
	num1 = 'c';
	num2 = '1';
	printf("num0 = %d\n", isdigit(num0));
	printf("num1 = %d\n", isdigit(num1));
	printf("num2 = %d\n", isdigit(num2));
	printf("ft_digit(num0) = %d\n", ft_isdigit(num0));
	printf("ft_digit(num1) = %d\n", ft_isdigit(num1));
	printf("ft_digit(num2) = %d\n", ft_isdigit(num2));
}*/
