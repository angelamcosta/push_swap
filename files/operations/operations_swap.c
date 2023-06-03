/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_swap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:00:42 by anlima            #+#    #+#             */
/*   Updated: 2023/06/03 22:00:43 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap_a(void);
void	ft_swap_b(void);
void	ft_swap_ss(void);
void	ft_swap(t_list **from);

void	ft_swap_a(void)
{
	ft_swap(&(stacks()->a));
	write(1, "sa\n", 3);
}

void	ft_swap_b(void)
{
	ft_swap(&(stacks()->b));
	write(1, "sb\n", 3);
}

void	ft_swap_ss(void)
{
	ft_swap(&(stacks()->a));
	ft_swap(&(stacks()->b));
	write(1, "ss\n", 3);
}

void	ft_swap(t_list **from)
{
	t_list	*temp;
	t_list	*list;

	list = *from;
	temp = (*from)->next;
	list->next = temp->next;
	temp->next = list;
	*from = temp;
}
