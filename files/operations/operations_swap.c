/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_swap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:00:42 by anlima            #+#    #+#             */
/*   Updated: 2023/03/17 15:36:42 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap_a(void);
void	ft_swap_b(void);
void	ft_swap_ss(void);

void	ft_swap_a(void)
{
	int	temp;

	temp = stacks()->a[0];
	stacks()->a[0] = stacks()->a[1];
	stacks()->a[1] = temp;
	write(1, "sa\n", 3);
}

void	ft_swap_b(void)
{
	int	temp;

	temp = stacks()->b[0];
	stacks()->b[0] = stacks()->b[1];
	stacks()->b[1] = temp;
	write(1, "sb\n", 3);
}

void	ft_swap_ss(void)
{
	int	temp;

	temp = stacks()->a[0];
	stacks()->a[0] = stacks()->a[1];
	stacks()->a[1] = temp;
	temp = stacks()->b[0];
	stacks()->b[0] = stacks()->b[1];
	stacks()->b[1] = temp;
	write(1, "ss\n", 3);
}
