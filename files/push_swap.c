/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:09:02 by anlima            #+#    #+#             */
/*   Updated: 2023/05/20 23:09:18 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{	
	if (argc <= 1)
		return (0);
	if (is_overflow(&argv[1]) || !(verify_str(&argv[1])))
		return (write(1, "Error\n", 6));
	populate_stacks(&argv[1]);
	if (has_repeats(stacks()->a))
		return (write(1, "Error\n", 6));
	while (ft_lstsize(stacks()->b) > 0)
	{
		ft_push_a();
		sort_stack_all();
	}
	return (0);
}
