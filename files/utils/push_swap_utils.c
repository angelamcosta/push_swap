/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:15:45 by anlima            #+#    #+#             */
/*   Updated: 2023/06/02 00:32:57 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	populate_stack_b(void);
void	populate_stacks(char **argv);
t_list	*return_middle(t_list **start);

void	populate_stacks(char **argv)
{
	int	i;

	i = -1;
	while (argv && argv[++i])
	{
		ft_lstadd_back(&(stacks()->a), ft_lstnew(ft_atoi(argv[i])));
		ft_lstadd_back(&(stacks()->sorted), ft_lstnew(ft_atoi(argv[i])));
	}
	if (is_sorted(stacks()->a) || has_repeats(stacks()->a))
		return ;
	bubble_sort();
	populate_stack_b();
	sort_stack_a();
}

void	populate_stack_b(void)
{
	t_list	*temp;

	while (ft_lstsize(stacks()->a) > 3)
	{
		temp = return_middle(&stacks()->sorted);
		if (ft_lstsize(stacks()->a) < ft_lstsize(temp))
			ft_push_b();
		else if (stacks()->a->content <= temp->content)
			ft_push_b();
		else
			ft_rotate_a();
	}
}

t_list	*return_middle(t_list **start)
{
	t_list	*fast;
	t_list	*slow;

	fast = *start;
	slow = *start;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return (slow);
}
