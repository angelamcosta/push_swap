/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:15:45 by anlima            #+#    #+#             */
/*   Updated: 2023/06/07 15:38:55 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	populate_stacks(char **argv);
void	sort_small_list(t_list *start);
void	sort_iterations(int nb, int c, int k);
int		make_iterations(t_list **start, int nb);
void	make_moves(int nb, int c, int temp, int j);

void	populate_stacks(char **argv)
{
	int	i;
	int	j;

	i = -1;
	while (argv && argv[++i])
	{
		ft_lstadd_back(&(stacks()->a), ft_lstnew(ft_atoi(argv[i])));
		ft_lstadd_back(&(stacks()->sorted), ft_lstnew(ft_atoi(argv[i])));
	}
	if (is_sorted(stacks()->a) || has_repeats(stacks()->a))
		return ;
	bubble_sort();
	j = ft_lstsize(stacks()->sorted);
	if (j <= 5)
		sort_small_list(stacks()->sorted);
	else if (j < 50)
		sort_iterations(j / 2, 2, j % 2);
	else
		sort_iterations(j / 5, 5, j % 5);
}

void	sort_iterations(int nb, int c, int k)
{
	int	max;
	int	min;

	max = INT_MAX;
	while (c--)
	{
		min = make_iterations(&stacks()->sorted, nb);
		if (c == 0)
			nb = nb + k;
		make_moves(nb, c, min, max);
		moves_b();
		max = stacks()->a->content - 1;
	}
}

void	make_moves(int nb, int c, int min, int max)
{
	int	i;

	i = 0;
	while (i < nb)
	{
		if (c == 0 && stacks()->a->content >= INT_MIN
			&& stacks()->a->content <= max)
		{
			ft_push_b();
			i++;
		}
		else if (stacks()->a->content > min && stacks()->a->content <= max)
		{
			ft_push_b();
			i++;
		}
		else
			ft_rotate_a();
	}
}

int	make_iterations(t_list **start, int nb)
{
	static int		i;
	int				j;
	t_list			*list;

	i += nb;
	j = i;
	list = *start;
	while (j > 0 && list->next)
	{
		j--;
		list = list->next;
	}
	return (list->content);
}

void	sort_small_list(t_list *start)
{
	int	second;

	while (start->next)
	{
		if (start->next->content == ft_lstlast(start)->content)
		{
			second = start->content;
			break ;
		}
		start = start->next;
	}
	while (ft_lstsize(stacks()->a) > 3)
	{
		if (stacks()->a->content == ft_lstlast(start)->content)
			ft_push_b();
		else if (stacks()->a->content == second)
			ft_push_b();
		else
			ft_rotate_a();
	}
	sort_stack_a();
	while (ft_lstsize(stacks()->b) > 0)
		ft_push_a();
	if (stacks()->a->content > stacks()->a->next->content)
		ft_swap_a();
}
