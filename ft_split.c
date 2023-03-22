/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcespede <fcespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:31:33 by fcespede          #+#    #+#             */
/*   Updated: 2023/02/02 12:59:04 by fcespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_len(char const *s, char c, size_t start)
{
	size_t	i;

	i = 0;
	while (s[start] != c && s[start])
	{
		start++;
		i++;
	}
	return (i);
}

static size_t	ft_words(char const *s, char c)
{
	size_t	i;
	size_t	n_words;
	size_t	count;

	i = 0;
	count = 0;
	n_words = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			n_words++;
		if (i != 0 && s[i] != c && s[i -1] == c)
			n_words++;
		i++;
	}
	return (n_words);
}

static void	*ft_free(char **new_string, size_t idx)
{
	while (idx--)
		free(new_string[idx]);
	free(new_string);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**new_string;
	size_t	i;
	size_t	idx;

	i = 0;
	idx = 0;
	new_string = malloc(sizeof(char *) * (ft_words(s, c) + 1));
	if (!new_string)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			new_string[idx] = ft_substr(s, i, ft_len(s, c, i));
			i += ft_len(s, c, i);
			if (!new_string[idx++])
				return (ft_free(new_string, idx));
		}
		while (s[i] == c && s[i])
			i++;
	}
	new_string[idx] = NULL;
	return (new_string);
}

/*int	main(void)
{
	char	str[] = "Hello!";
	char	c = 32;
	char	**ptr;
	int		i;

	ptr = ft_split(str, c);
	//printf("Despues de llamar al split voy a intentar printarlo\n");
	while (ptr[i])
		printf("|%s|\n", ptr[i++]);
	return (0);
//	printf("%zu\n", ft_words("iOOaOOa", 'O'));
}*/
