/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcespede <fcespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:09:42 by fcespede          #+#    #+#             */
/*   Updated: 2023/03/04 16:23:48 by fcespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new_string;
	int		idx;

	idx = 0;
	while (s1[idx])
		idx++;
	new_string = malloc(sizeof(char) * (idx + 1));
	if (!new_string)
		return (NULL);
	idx = -1;
	while (s1[++idx] != '\0')
		new_string[idx] = ((char *) s1)[idx];
	new_string[idx] = '\0';
	return (new_string);
}

/*int	main(void)
{

}*/
