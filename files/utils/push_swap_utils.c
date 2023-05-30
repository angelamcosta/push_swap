/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:15:45 by anlima            #+#    #+#             */
/*   Updated: 2023/05/30 16:57:43 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_b(void);
void	populate_stack_b(void);
void	sort_all_b(int i, int j);
void	populate_stacks(char **argv);
t_list	*return_middle(t_list **start);

void	populate_stacks(char **argv)
{
	int		i;

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
		while (ft_lstsize(stacks()->a) < ft_lstsize(temp))
			temp = return_middle(&temp);
		if (stacks()->a->content <= temp->content)
		{
			ft_push_b();
			if (ft_lstsize(stacks()->b) >= 3)
				ft_sort_b();
		}
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

void	ft_sort_b(void)
{
	int		i;
	int		temp;
	t_list	*b;

	i = 0;
	b = stacks()->b;
	while (b->next)
	{
		if (b->content < b->next->content)
		{
			temp = b->content;
			while (b->next && temp < b->next->content)
			{
				i++;
				b = b->next;
			}
			break ;
		}
		b = b->next;
	}
	if (i == 0)
		return ;
	sort_all_b(i, 0);
}

void	sort_all_b(int i, int j)
{
	if (i <= ((ft_lstsize(stacks()->b) - 1) / 2))
	{
		ft_swap_b();
		while (j++ < i - 1)
		{
			ft_rotate_b();
			ft_swap_b();
		}
		j = 0;
		while (j++ < i - 1)
			ft_reverser_b();
	}
	else
	{
		j = ft_lstsize(stacks()->b) - i - 1;
		while (j-- > 0)
		{
			ft_reverser_b();
			ft_swap_b();
		}
		j = ft_lstsize(stacks()->b) - i;
		while (j-- > 0)
			ft_rotate_b();
	}
}
