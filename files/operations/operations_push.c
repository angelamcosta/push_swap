/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:24:08 by anlima            #+#    #+#             */
/*   Updated: 2023/03/19 16:37:51 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push_a(void);
void	ft_push_b(void);
void	ft_push(int *a, int *b, int *cont_a, int *cont_b);

void	ft_push_a(void)
{
	ft_push(stacks()->a, stacks()->b, &stacks()->cont_a, &stacks()->cont_b);
	write(1, "pa\n", 3);
}

void	ft_push_b(void)
{
	ft_push(stacks()->b, stacks()->a, &stacks()->cont_b, &stacks()->cont_a);
	write(1, "pb\n", 3);
}

void	ft_push(int *a, int *b, int *cont_a, int *cont_b)
{
	int	i;
	int	j;

	i = cont_a[0];
	while (i >= 0)
	{
		if (i == 0)
		{
			a[0] = b[0];
			j = -1;
			while (++j < cont_b[0])
			{
				if (j == cont_b[0] - 1)
					b[j] = 0;
				else
					b[j] = b[j + 1];
			}
		}
		else
			a[i] = a[i - 1];
		i--;
	}
	cont_a[0]++;
	cont_b[0]--;
}
