/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:15:45 by anlima            #+#    #+#             */
/*   Updated: 2023/05/19 19:00:10 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	populate_stacks(char **argv);

void	populate_stacks(char **argv)
{
	int		i;

	i = -1;
	while (argv && argv[++i])
		ft_lstadd_back(&(stacks()->a), ft_lstnew(ft_atoi(argv[i])));
	if (is_sorted(stacks()->a) || has_repeats(stacks()->a))
		return ;
	while (ft_lstsize(stacks()->a) > 3)
		ft_push_b();
}
