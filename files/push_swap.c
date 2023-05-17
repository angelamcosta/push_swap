/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:09:02 by anlima            #+#    #+#             */
/*   Updated: 2023/05/17 15:05:01 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{	
	if (argc <= 1)
		return (0);
	if (!is_valid(argv) || is_overflow(&argv[1]))
		return (write(1, "Error\n", 6));
	stacks()->size_a = argc - 1;
	if (stacks()->size_a - 3 > 0)
		stacks()->size_b = stacks()->size_a - 3;
	populate_stacks(&argv[1]);
	if (has_repeats())
		return (write(1, "Error\n", 6));
	if (is_sorted(stacks()->a) && (stacks()->cont_b == 0))
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
