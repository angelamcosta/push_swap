/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:15:45 by anlima            #+#    #+#             */
/*   Updated: 2023/03/17 18:03:19 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*stacks(void);
int		create_stacks(void);
void	populate_stacks(char **argv);
void	sort_stack_a(void);

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

void	sort_stack_a(void)
{
	int	*temp;

	temp = stacks()->a;
	if (temp[0] > temp[1] && temp[0] < temp[2])
		ft_swap_a();
	else if (temp[0] > temp[1] && temp[0] > temp[2])
		ft_rotate_a();
	else if (temp[1] > temp[0] && temp[1] > temp[2])
	{
		ft_reverser_a();
		ft_swap_a();
	}
}

void	sort_all(void)
{
	int	*a;
	int	*b;
	int	i;
	int	j;

	sort_stack_a();
	a = stacks()->a;
	b = stacks()->b;
	i = 0;
	while (stacks()->cont_b > 0)
	{
		while (b[0] > a[i])
			i++;
		if (i == 0)
			ft_push_a();
		else
		{
			j = i;
			while (j-- > 0)
				ft_rotate_a();
			ft_push_a();
			while (i-- > 0)
				ft_reverser_a();
		}
	}
}
