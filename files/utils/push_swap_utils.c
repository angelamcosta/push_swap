/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:15:45 by anlima            #+#    #+#             */
/*   Updated: 2023/05/19 22:23:24 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_stack_a(void);
void	sort_stack_all(void);
void	populate_stacks(char **argv);

void	populate_stacks(char **argv)
{
	int		i;

	i = -1;
	while (argv && argv[++i])
		ft_lstadd_back(&(stacks()->a), ft_lstnew(ft_atoi(argv[i])));
	if (is_sorted(stacks()->a) || has_repeats(stacks()->a))
		return ;
	bubble_sort(stacks()->a);
	while (ft_lstsize(stacks()->a) > 3)
	{
		if (stacks()->a->next->content < stacks()->a->content && stacks()->a->next->content < ft_lstlast(stacks()->a)->content)
			ft_swap_a();
		if (ft_lstlast(stacks()->a)->content < stacks()->a->content && ft_lstlast(stacks()->a)->content < stacks()->a->next->content)
		{
			if (ft_lstsize(stacks()->b) > 3 && (ft_lstlast(stacks()->b)->content > stacks()->b->content && ft_lstlast(stacks()->b)->content > stacks()->b->next->content))
				ft_reverser_rr();
			else
				ft_reverser_a();
		}
		ft_push_b();
	}
	sort_stack_a();
}

void	sort_stack_a(void)
{
	if (stacks()->a->content > stacks()->a->next->content&& stacks()->a->content > stacks()->a->next->next->content)
		ft_rotate_a();
	else if (stacks()->a->next->content > stacks()->a->content && stacks()->a->next->content > stacks()->a->next->next->content)
		ft_reverser_a();
	if (stacks()->a->content > stacks()->a->next->content)
		ft_swap_a();
}

// void	sort_all(int i)
// {
	
// }
