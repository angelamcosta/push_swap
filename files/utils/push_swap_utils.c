/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:15:45 by anlima            #+#    #+#             */
/*   Updated: 2023/03/17 15:05:09 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*stacks(void);
int		create_stacks(void);
void	populate_stacks(char **argv);

t_stack	*stacks(void)
{
	static t_stack	stacks;

	return (&stacks);
}

int	create_stacks(void)
{
	stacks()->a = (int *)malloc((sizeof(int)) * (stacks()->size_a));
	if (!stacks()->a)
		return (0);
	if (stacks()->size_b > 0)
	{
		stacks()->b = (int *)malloc((sizeof(int)) * (stacks()->size_b));
		if (!stacks()->b)
			return (0);
	}
	return (1);
}

void	populate_stacks(char **argv)
{
	int		i;
	int		j;

	if (create_stacks())
	{
		i = 0;
		j = stacks()->size_b;
		if (j == 0)
			i++;
		else
		{
			while (argv && argv[j] && j >= 0)
				stacks()->b[i++] = ft_atoi(argv[j--]);
			j = 0;
		}
		while (argv && argv[i])
			stacks()->a[j++] = ft_atoi(argv[i++]);
	}
	stacks()->cont_a = stacks()->size_a - stacks()->size_b;
	stacks()->cont_b = stacks()->size_b;
}
