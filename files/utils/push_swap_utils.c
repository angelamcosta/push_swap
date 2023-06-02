/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:15:45 by anlima            #+#    #+#             */
/*   Updated: 2023/06/02 13:28:04 by anlima           ###   ########.fr       */
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
	int		i;
	t_list	*temp;

	while (ft_lstsize(stacks()->a) > 3)
	{
		if (ft_lstsize(stacks()->a) < NUM_IT)
		{
			ft_push_b();
			continue ;
		}
		temp = return_middle(&stacks()->sorted);
		i = 0;
		while (i < NUM_IT && ft_lstsize(stacks()->a) > 3)
		{
			if (stacks()->a->content <= temp->content)
			{
				ft_push_b();
				i++;
			}
			else
				ft_rotate_a();
		}
	}
}

t_list	*return_middle(t_list **start)
{
	static int	i;
	int			j;
	t_list		*list;

	i = NUM_IT;
	j = i;
	list = *start;
	while (j > 0 && list->next)
	{
		j--;
		list = list->next;
	}
	i += NUM_IT;
	return (list);
}
