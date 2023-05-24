/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:49:34 by anlima            #+#    #+#             */
/*   Updated: 2023/05/24 16:50:06 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort(void);
void	sort_stack_a(void);
void	sort_stack_b(void);
void	sort_all(int i, int j);


void	sort_stack_a(void)
{
	if (stacks()->a->content > stacks()->a->next->content && stacks()->a->content > ft_lstlast(stacks()->a)->content)
		ft_rotate_a();
	else if (stacks()->a->next->content > stacks()->a->content && stacks()->a->next->content > ft_lstlast(stacks()->a)->content)
		ft_reverser_a();
	if (stacks()->a->content > stacks()->a->next->content)
		ft_swap_a();
}

void	sort_stack_b(void)
{
	if (ft_lstsize(stacks()->b) >= 3)
	{
		if (stacks()->b->content < stacks()->b->next->content && stacks()->b->content < ft_lstlast(stacks()->b)->content)
			ft_rotate_b();
		else if (stacks()->b->next->content < stacks()->b->content && stacks()->b->next->content < ft_lstlast(stacks()->b)->content)
			ft_reverser_b();
		if (stacks()->b->content < stacks()->b->next->content)
			ft_swap_b();
	}
}

void	ft_sort(void)
{
	int		i;
	int		temp;
	t_list	*a;

	i = 0;
	a = stacks()->a;
	while (a->next)
	{
		if (a->content > a->next->content)
		{
			temp = a->content;
			while (a && temp > a->next->content)
			{
				i++;
				a = a->next;
			}
			break ;
		}
		a = a->next;
	}
	if (i == 0)
		return ;
	else
		sort_all(i, 0);
}

void	sort_all(int i, int j)
{
	if (i <= ((ft_lstsize(stacks()->a) - 1) / 2))
	{
		ft_swap_a();
		while (j++ < i - 1)
		{
			ft_rotate_a();
			ft_swap_a();
		}
		j = 0;
		while (j++ < i - 1)
			ft_reverser_a();
	}
	else
	{
		j = ft_lstsize(stacks()->a) - i - 1;
		while (j-- > 0)
		{
			ft_reverser_a();
			ft_swap_a();
		}
		j = ft_lstsize(stacks()->a) - i;
		while (j-- > 0)
			ft_rotate_a();
	}
}