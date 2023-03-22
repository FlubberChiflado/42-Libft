/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcespede <fcespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:28:28 by fcespede          #+#    #+#             */
/*   Updated: 2023/03/04 16:25:24 by fcespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_chrjoin(char const *s1, char s2)
{
	char	*new_string;
	int		i;
	int		j;

	if (!s1)
		s1 = ft_strdup("");
	if (!s1)
		return (NULL);
	new_string = malloc(sizeof(char) * (ft_strlen(s1) + 2));
	if (!new_string)
	{
		free((void *)s1);
		exit (0);
	}
	i = -1;
	j = 0;
	while (s1[++i])
		new_string[i] = s1[i];
	new_string[i++] = s2;
	new_string[i] = '\0';
	free((void *)s1);
	return (new_string);
}
