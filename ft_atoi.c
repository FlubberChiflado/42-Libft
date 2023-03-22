/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcespede <fcespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 12:03:10 by fcespede          #+#    #+#             */
/*   Updated: 2022/10/02 11:49:35 by fcespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sign(const char *str)
{
	int	sign;

	sign = 0;
	while (*str == 45 || *str == 43)
	{
		sign++;
		str++;
	}
	return (sign);
}

static int	ft_isnegative(const char *str)
{
	int	sign;

	sign = 0;
	while (*str == 45 || *str == 43)
	{
		if (*str == 45)
			sign++;
		str++;
	}
	if (sign % 2 != 0)
		sign = 1;
	return (sign);
}

int	ft_atoi(const char *str)
{
	unsigned int	res;
	int				sign;

	sign = 0;
	res = 0;
	while (*str <= 32)
	{
		if ((*str >= 9 && *str <= 13) || *str == 32)
			++str;
		else
			return (0);
	}
	if (ft_sign(&(*str)) > 1)
		return (0);
	sign = ft_isnegative(&(*str));
	str = str + ft_sign(&(*str));
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		++str;
	}
	if (sign == 1 && res <= 2147483647)
		return (res * -1);
	return (res);
}

/*int	main(void)
{
	char *n = "+123THERE IS A NYANCAT UNDER YOUR BED";
 	int i1 = atoi(n);
 	int i2 = ft_atoi(n);

	printf("%d\n", i1);
	printf("%d\n", i2);
 	if (i1 == i2)
 		printf("TEST_SUCCESS\n");
 	printf("TEST_FAILED");
}*/
