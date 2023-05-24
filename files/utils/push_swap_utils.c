/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:15:45 by anlima            #+#    #+#             */
/*   Updated: 2023/05/24 16:53:02 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	populate_stack_b(void);
void	populate_stacks(char **argv);

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
	ft_lstiter(stacks()->sorted);
	populate_stack_b();
	sort_stack_a();
}

void	populate_stack_b(void)
{
	while (ft_lstsize(stacks()->a) > 3)
	{
		sort_stack_a();
		ft_push_b();
		if (ft_lstsize(stacks()->b) >= 3)
			sort_stack_b();
	}
}
