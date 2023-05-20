/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:24:08 by anlima            #+#    #+#             */
/*   Updated: 2023/05/20 23:29:33 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push_a(void);
void	ft_push_b(void);
void	ft_push(t_list **from, t_list **to);

void	ft_push_a(void)
{
	ft_push(&(stacks()->b), &(stacks()->a));
	write(1, "pa\n", 3);
}

void	ft_push_b(void)
{
	ft_push(&(stacks()->a), &(stacks()->b));
	write(1, "pb\n", 3);
}

void	ft_push(t_list **from, t_list **to)
{
	t_list	*temp;

	temp = *from;
    *from = (*from)->next;
    temp->next = *to;
    *to = temp;
}
