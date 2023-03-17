/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:24:08 by anlima            #+#    #+#             */
/*   Updated: 2023/03/17 16:21:06 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push_a(void);
void	ft_push_b(void);

void	ft_push_a(void)
{
	int	i;
	int	j;

	i = stacks()->cont_a;
	while (i >= 0)
	{
		if (i == 0)
		{
			stacks()->a[0] = stacks()->b[0];
			j = -1;
			while (++j < stacks()->cont_b)
			{
				if (j == stacks()->cont_b - 1)
					stacks()->b[j] = 0;
				else
					stacks()->b[j] = stacks()->b[j + 1];
			}
		}
		else
			stacks()->a[i] = stacks()->a[i - 1];
		i--;
	}
	stacks()->cont_a++;
	stacks()->cont_b--;
	write(1, "pa\n", 3);
}

void	ft_push_b(void)
{
	int	i;
	int	j;

	i = stacks()->cont_b;
	while (i >= 0)
	{
		if (i == 0)
		{
			stacks()->b[0] = stacks()->a[0];
			j = -1;
			while (++j < stacks()->cont_a)
			{
				if (j == stacks()->cont_a - 1)
					stacks()->a[j] = 0;
				else
					stacks()->a[j] = stacks()->a[j + 1];
			}
		}
		else
			stacks()->b[i] = stacks()->b[i - 1];
		i--;
	}
	stacks()->cont_a--;
	stacks()->cont_b++;
	write(1, "pb\n", 3);
}
