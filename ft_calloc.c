/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcespede <fcespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:46:14 by fcespede          #+#    #+#             */
/*   Updated: 2022/10/02 11:49:46 by fcespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;
	int		i;
	int		s;

	res = 0;
	i = 0;
	s = 0;
	res = (void *) malloc(count * size);
	if (!res)
		return (NULL);
	while (count--)
	{
		s = size;
		while (s--)
			((char *) res)[i++] = '\0';
	}
	return (res);
}

/*int	main(void)
{
	char *str = ft_calloc(20, sizeof(char));
	printf("%s\n", str);	
}*/
