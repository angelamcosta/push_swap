/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:09:02 by anlima            #+#    #+#             */
/*   Updated: 2023/05/19 19:53:04 by anlima           ###   ########.fr       */
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
	ft_lstiter(stacks()->a);
	ft_lstiter(stacks()->b);
	return (0);
}
