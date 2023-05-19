/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:13:36 by anlima            #+#    #+#             */
/*   Updated: 2023/05/19 19:02:18 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *list);
void	ft_lstiter(t_list *list);
t_list	*ft_lstlast(t_list *list);
void	ft_lstadd_back(t_list **list, t_list *new);

int	ft_lstsize(t_list *list)
{
	int	i;

	if (!list)
		return (0);
	i = 1;
	while (list->next)
	{
		list = list->next;
		i++;
	}
	return (i);
}

void	ft_lstiter(t_list *list)
{
	while (list)
	{
		printf("%i ", list->content);
		list = list->next;
	}
	printf("\n");
}

t_list	*ft_lstnew(int content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (!list)
		return (0);
	list->content = content;
	list->next = 0;
	return (list);
}

t_list	*ft_lstlast(t_list *list)
{
	if (!list)
		return (0);
	while (list->next)
		list = list->next;
	return (list);
}

void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*aux;

	if (!*list)
	{
		*list = new;
		return ;
	}
	aux = ft_lstlast(*list);
	aux->next = new;
}
