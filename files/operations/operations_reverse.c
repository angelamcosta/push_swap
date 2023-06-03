/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_reverse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:37:52 by anlima            #+#    #+#             */
/*   Updated: 2023/06/03 22:00:31 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_reverser_a(void);
void	ft_reverser_b(void);
void	ft_reverser_rr(void);
void	ft_reverser(t_list **from);

void	ft_reverser_a(void)
{
	ft_reverser(&(stacks()->a));
	write(1, "rra\n", 4);
}

void	ft_reverser_b(void)
{
	ft_reverser(&(stacks()->b));
	write(1, "rrb\n", 4);
}

void	ft_reverser_rr(void)
{
	ft_reverser(&(stacks()->a));
	ft_reverser(&(stacks()->b));
	write(1, "rrr\n", 4);
}

void	ft_reverser(t_list **from)
{
	t_list	*temp;
	t_list	*list;

	list = *from;
	while (list->next->next)
		list = list->next;
	temp = list->next;
	temp->next = *from;
	*from = temp;
	list->next = 0;
}
