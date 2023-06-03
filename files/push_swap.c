/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:09:02 by anlima            #+#    #+#             */
/*   Updated: 2023/06/03 22:01:23 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	if (argc <= 1)
		return (0);
	if (!(verify_str(&argv[1])))
		return (write(1, "Error\n", 6));
	populate_stacks(&argv[1]);
	if (has_repeats(stacks()->a))
	{
		free_stacks();
		return (write(1, "Error\n", 6));
	}
	free_stacks();
	return (0);
}
