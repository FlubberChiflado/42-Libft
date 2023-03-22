/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcespede <fcespede@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:10:53 by fcespede          #+#    #+#             */
/*   Updated: 2022/10/01 17:49:54 by fcespede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lista;

	lista = *lst;
	if (!new)
		return ;
	if (!lista)
	{
		*lst = new;
		return ;
	}	
	while (lista->next != NULL)
		lista = lista->next;
	lista->next = new;
}
/*
void	insertInicio(t_list **lst, void *input)
{
	t_list	*node;

	node = (t_list *) malloc(sizeof(t_list));
	node->content = input;
	node->next = *lst;
	*lst = node;
}

int	main(void)
{
	t_list	*lst;
	t_list	lista;
	char **argumento;
	int		i;

	i = 0;
	lista.content = "\nYo me llamo pepe \n";
	lista.next = NULL;
	lst = NULL;
	insertInicio(&lst, "- Pregunto de forma audaz. ");
	insertInicio(&lst, "tu?");
	insertInicio(&lst, "y ");
	insertInicio(&lst, "Frank ");
	insertInicio(&lst, "llamo ");
	insertInicio(&lst, "me ");
	insertInicio(&lst, "hola ");
	printf("HOLA\n");
	ft_lstadd_back(&lst, &lista);
	printf("adeu\n");
	while (i < 9)
	{
		printf("%s", lst->content);
		lst = lst->next;
		i++;
	}

}*/
