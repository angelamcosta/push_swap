/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:09:02 by anlima            #+#    #+#             */
/*   Updated: 2023/05/12 14:28:50 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{	
	if (argc <= 1)
		return (write(1, "You need to pass arguments to populate stack a!\n", 48));
	if (!is_valid(argv))
		return (write(1, "Error\n", 6));
	if (is_overflow(&argv[1]))
		return (write(1, "Error\n", 6));
	stacks()->size_a = argc - 1;
	if (stacks()->size_a - 3 > 0)
		stacks()->size_b = stacks()->size_a - 3;
	populate_stacks(argv);
	if (has_repeats(stacks()->a, stacks()->size_a))
		return (write(1, "Error\n", 6));
	if (is_sorted(stacks()->a))
		return (0);
	while (stacks()->cont_b > 0)
	{
		ft_push_a();
		sort_stack_all();
	}
	free(stacks()->a);
	free(stacks()->b);
	return (0);
}
