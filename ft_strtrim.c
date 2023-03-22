/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcespede <fcespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:28:19 by fcespede          #+#    #+#             */
/*   Updated: 2022/10/01 18:29:51 by fcespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_init(char const *s1, char const *set)
{
	size_t	len;
	size_t	init;

	init = 0;
	len = 0;
	while (len < ft_strlen(set))
	{
		while (s1[init] == set[len])
		{
			len = 0;
			init++;
		}
		len++;
	}
	return (init);
}

static size_t	ft_end(char const *s1, char const *set, size_t init)
{
	size_t	len;
	size_t	end;

	len = 0;
	end = ft_strlen(s1);
	while (len < ft_strlen(set) && end > init)
	{
		if (!s1[end])
			end--;
		while (s1[end] == set[len])
		{
			len = 0;
			end--;
		}
		len++;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	init;
	size_t	end;
	size_t	i;

	i = 0;
	init = ft_init(s1, set);
	if (!ft_strlen(s1) || ft_strlen(s1) == init + 1)
		return (ft_strdup(""));
	end = ft_end(s1, set, init) + 1;
	return (ft_substr(s1, init, end - init));
}

/*int	main(void)
{
	printf("init = %zu, end = %zu, total = %zu\n", init, end, (end - init));

 	char *s1 = "  \t \t \n   \n\n\n\t";
 	char *s2 = "";
 	char *ret = ft_strtrim(s1, " \n\t");

 	if (!strcmp(ret, s2))
 		printf("TEST_SUCCESS");
 	printf("TEST_FAILED");
}*/
