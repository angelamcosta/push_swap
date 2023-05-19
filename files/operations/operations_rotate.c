/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:29:12 by anlima            #+#    #+#             */
/*   Updated: 2023/05/19 19:45:58 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate_a(void);
void	ft_rotate_b(void);
void	ft_rotate_rr(void);
void	ft_rotate(t_list **from);

void	ft_rotate_a(void)
{
	ft_rotate(&(stacks()->a));
	write(1, "ra\n", 3);
}

void	ft_rotate_b(void)
{
	ft_rotate(&(stacks()->b));
	write(1, "rb\n", 3);
}

void	ft_rotate_rr(void)
{
	ft_rotate(&(stacks()->a));
	ft_rotate(&(stacks()->b));
	write(1, "rr\n", 3);
}

void	ft_rotate(t_list **from)
{
	t_list	*temp;
	t_list	*list;

	list = ft_lstlast(*from);
	temp = *from;
	list->next =  temp;
	*from = (*from)->next;
	temp->next = 0;
}
