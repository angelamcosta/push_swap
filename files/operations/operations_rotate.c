/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:29:12 by anlima            #+#    #+#             */
/*   Updated: 2023/03/17 16:42:30 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate_a(void);
void	ft_rotate_b(void);
void	ft_rotate_rr(void);

void	ft_rotate_a(void)
{
	int	i;
	int	temp;

	temp = stacks()->a[0];
	i = 0;
	while (i < stacks()->cont_a)
	{
		if (i == stacks()->cont_a - 1)
			stacks()->a[i] = temp;
		else
			stacks()->a[i] = stacks()->a[i + 1];
		i++;
	}
	write(1, "ra\n", 3);
}

void	ft_rotate_b(void)
{
	int	i;
	int	temp;

	temp = stacks()->b[0];
	i = 0;
	while (i < stacks()->cont_b)
	{
		if (i == stacks()->cont_b - 1)
			stacks()->b[i] = temp;
		else
			stacks()->b[i] = stacks()->b[i + 1];
		i++;
	}
	write(1, "rb\n", 3);
}

void	ft_rotate_rr(void)
{
	int	i;
	int	temp;

	temp = stacks()->a[0];
	i = 0;
	while (i < stacks()->cont_a)
	{
		if (i == stacks()->cont_a - 1)
			stacks()->a[i] = temp;
		else
			stacks()->a[i] = stacks()->a[i + 1];
		i++;
	}
	temp = stacks()->b[0];
	i = 0;
	while (i < stacks()->cont_b)
	{
		if (i == stacks()->cont_b - 1)
			stacks()->b[i] = temp;
		else
			stacks()->b[i] = stacks()->b[i + 1];
		i++;
	}
	write(1, "rr\n", 3);
}
