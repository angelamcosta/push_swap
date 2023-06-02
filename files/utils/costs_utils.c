/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   costs_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 13:13:06 by anlima            #+#    #+#             */
/*   Updated: 2023/06/02 13:19:24 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	calculate_cost(void);
int		calculate_cost_a(int nb);
int		calculate_cost_b(int nb);

void	calculate_cost(void)
{
	int		i;
	int		j;
	int		k;
	t_list	*b;

	b = stacks()->b;
	i = INT_MAX;
	while (b->next)
	{
		j = calculate_cost_a(b->content) + calculate_cost_b(b->content);
		if (j < i)
		{
			i = j;
			k = calculate_cost_b(b->content);
		}
		b = b->next;
	}
	sort_all_b(j, 0);
}

int	calculate_cost_a(int nb)
{
	int		i;
	t_list	*a;

	i = 0;
	a = stacks()->a;
	while (a->next)
	{
		if (nb > a->content)
		{
			while (a->next && nb > a->content)
			{
				i++;
				a = a->next;
			}
			break ;
		}
		a = a->next;
	}
	if (i > (ft_lstsize(a) / 2))
		return (ft_lstsize(a) - i);
	return (i);
}

int	calculate_cost_b(int nb)
{
	int		i;
	t_list	*b;

	i = 0;
	b = stacks()->b;
	while (b->next)
	{
		if (nb == b->content)
			break ;
		b = b->next;
		i++;
	}
	if (i > (ft_lstsize(b) / 2))
		return (ft_lstsize(b) - i);
	return (i);
}
