/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_reverse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:37:52 by anlima            #+#    #+#             */
/*   Updated: 2023/03/18 22:20:29 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_reverser_a(void);
void	ft_reverser_b(void);
void	ft_reverser_rr(void);
void	ft_reverser(int *a, int cont_a);

void	ft_reverser_a(void)
{
	ft_reverser(stacks()->a, stacks()->cont_a);
	write(1, "rra\n", 4);
}

void	ft_reverser_b(void)
{
	ft_reverser(stacks()->b, stacks()->cont_b);
	write(1, "rrb\n", 4);
}

void	ft_reverser_rr(void)
{
	ft_reverser(stacks()->a, stacks()->cont_a);
	ft_reverser(stacks()->b, stacks()->cont_b);
	write(1, "rrr\n", 4);
}

void	ft_reverser(int *a, int cont_a)
{
	int	i;
	int	temp;

	temp = a[cont_a - 1];
	i = cont_a;
	while (--i >= 0)
	{
		if (i == 0)
			a[i] = temp;
		else
			a[i] = a[i - 1];
	}
}
