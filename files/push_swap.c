/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:09:02 by anlima            #+#    #+#             */
/*   Updated: 2023/03/17 18:14:28 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{	
	if (argc > 1)
	{
		stacks()->size_a = argc - 1;
		stacks()->size_b = stacks()->size_a - 3;
		populate_stacks(argv);
		sort_all();
	}
	else
		write(1, "You need to pass arguments to populate stack a!\n", 48);
	return (0);
}
