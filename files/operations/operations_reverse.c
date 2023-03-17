/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_reverse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:37:52 by anlima            #+#    #+#             */
/*   Updated: 2023/03/17 16:43:31 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_reverser_a(void);
void	ft_reverser_b(void);
void	ft_reverser_rr(void);

void	ft_reverser_a(void)
{
	int	i;
	int	temp;

	temp = stacks()->a[stacks()->cont_a - 1];
	i = stacks()->cont_a;
	while (--i >= 0)
	{
		if (i == 0)
			stacks()->a[i] = temp;
		else
			stacks()->a[i] = stacks()->a[i - 1];
	}
	write(1, "rra\n", 4);
}

void	ft_reverser_b(void)
{
	int	i;
	int	temp;

	temp = stacks()->b[stacks()->cont_b - 1];
	i = stacks()->cont_b;
	while (--i >= 0)
	{
		if (i == 0)
			stacks()->b[i] = temp;
		else
			stacks()->b[i] = stacks()->b[i - 1];
	}
	write(1, "rrb\n", 4);
}

void	ft_reverser_rr(void)
{
	int	i;
	int	temp;

	temp = stacks()->a[stacks()->cont_a - 1];
	i = stacks()->cont_a;
	while (--i >= 0)
	{
		if (i == 0)
			stacks()->a[i] = temp;
		else
			stacks()->a[i] = stacks()->a[i - 1];
	}
	temp = stacks()->b[stacks()->cont_b - 1];
	i = stacks()->cont_b;
	while (--i >= 0)
	{
		if (i == 0)
			stacks()->b[i] = temp;
		else
			stacks()->b[i] = stacks()->b[i - 1];
	}
	write(1, "rrr\n", 4);
}
