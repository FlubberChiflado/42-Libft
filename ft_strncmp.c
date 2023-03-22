/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcespede <fcespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:11:44 by fcespede          #+#    #+#             */
/*   Updated: 2022/10/01 18:27:36 by fcespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
			i++;
	if (s1[i] == s2[i])
		return (0);
	else
		return (((unsigned char *) s1)[i] - ((unsigned char *) s2)[i]);
}

/*int	main(void)
{
	char name[] = "test\200";
   	char name1[] = "test\0";
	int n = strncmp(name, name1, 6);
	printf("%d\n",n );
	printf("%d\n", ft_strncmp(name, name1, 6));
}*/
