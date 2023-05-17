/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:15:45 by anlima            #+#    #+#             */
/*   Updated: 2023/05/17 14:59:20 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_stack_a(void);
int		create_stacks(void);
void	sort_stack_all(void);
void	sort_all(int i, int j);
void	populate_stacks(char **argv);

int	create_stacks(void)
{
	stacks()->a = (int *)malloc((sizeof(int)) * (stacks()->size_a));
	if (!stacks()->a)
		return (0);
	if (stacks()->size_b > 0)
	{
		stacks()->b = (int *)malloc((sizeof(int)) * (stacks()->size_b));
		if (!stacks()->b)
		{
			free(stacks()->a);
			return (0);
		}
	}
	return (1);
}

void	populate_stacks(char **argv)
{
	int	i;
	int	j;

	if (create_stacks())
	{
		i = -1;
		j = 0;
		while (argv && argv[++i])
		{
			stacks()->a[j++] = ft_atoi(argv[i]);
			stacks()->cont_a++;
		}
		if (is_sorted(stacks()->a) || has_repeats())
			return ;
		while (stacks()->cont_a != 3)
		{
			if (stacks()->a[0] > stacks()->a[0])
				ft_swap_a();
			ft_push_b();
		}
		sort_stack_a();
	}
}

void	sort_stack_a(void)
{
	int	*a;

	a = stacks()->a;
	if (a[0] > a[1] && a[0] > a[2])
		ft_rotate_a();
	else if (a[1] > a[0] && a[1] > a[2])
		ft_reverser_a();
	if (a[0] > a[1])
		ft_swap_a();
}

void	sort_stack_all(void)
{
	int	i;
	int	j;
	int	*a;

	i = 0;
	j = 1;
	a = stacks()->a;
	while (a[i])
	{
		if (a[0] < a[i + 1] || !(a[i + 1]))
			break ;
		i++;
	}
	if (i == 0)
		return ;
	if (i == 1)
		ft_swap_a();
	else
		sort_all(i, j);
}

void	sort_all(int i, int j)
{
	if (i <= ((stacks()->cont_a - 1) / 2))
	{
		ft_swap_a();
		while (j++ < i)
		{
			ft_rotate_a();
			ft_swap_a();
		}
		j = 1;
		while (j++ < i)
			ft_reverser_a();
	}
	else
	{
		j = stacks()->cont_a - 1 - i;
		while (j-- > 0)
		{
			ft_reverser_a();
			ft_swap_a();
		}
		j = stacks()->cont_a - i;
		while (j-- > 0)
			ft_rotate_a();
	}
}
