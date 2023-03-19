/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_swap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:00:42 by anlima            #+#    #+#             */
/*   Updated: 2023/03/18 22:34:50 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap_a(void);
void	ft_swap_b(void);
void	ft_swap_ss(void);
void	ft_swap(int *a);

void	ft_swap_a(void)
{
	ft_swap(stacks()->a);
	write(1, "sa\n", 3);
}

void	ft_swap_b(void)
{
	ft_swap(stacks()->b);
	write(1, "sb\n", 3);
}

void	ft_swap_ss(void)
{
	ft_swap(stacks()->a);
	ft_swap(stacks()->b);
	write(1, "ss\n", 3);
}

void	ft_swap(int *a)
{
	int	temp;

	temp = a[0];
	a[0] = a[1];
	a[1] = temp;
}
