/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:29:12 by anlima            #+#    #+#             */
/*   Updated: 2023/03/18 22:23:40 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate_a(void);
void	ft_rotate_b(void);
void	ft_rotate_rr(void);
void	ft_rotate(int *a, int cont_a);

void	ft_rotate_a(void)
{
	ft_rotate(stacks()->a, stacks()->cont_a);
	write(1, "ra\n", 3);
}

void	ft_rotate_b(void)
{
	ft_rotate(stacks()->b, stacks()->cont_b);
	write(1, "rb\n", 3);
}

void	ft_rotate_rr(void)
{
	ft_rotate(stacks()->a, stacks()->cont_a);
	ft_rotate(stacks()->b, stacks()->cont_b);
	write(1, "rr\n", 3);
}

void	ft_rotate(int *a, int cont_a)
{
	int	i;
	int	temp;

	temp = a[0];
	i = 0;
	while (i < cont_a)
	{
		if (i == cont_a - 1)
			a[i] = temp;
		else
			a[i] = a[i + 1];
		i++;
	}
}
