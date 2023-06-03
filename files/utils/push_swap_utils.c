/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:15:45 by anlima            #+#    #+#             */
/*   Updated: 2023/06/03 22:01:03 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	min_iterations(void);
void	max_iterations(void);
void	populate_stacks(char **argv);
t_list	*return_middle_min(t_list **start);
t_list	*return_middle_max(t_list **start);

void	populate_stacks(char **argv)
{
	int	i;

	i = -1;
	while (argv && argv[++i])
	{
		ft_lstadd_back(&(stacks()->a), ft_lstnew(ft_atoi(argv[i])));
		ft_lstadd_back(&(stacks()->sorted), ft_lstnew(ft_atoi(argv[i])));
	}
	if (is_sorted(stacks()->a) || has_repeats(stacks()->a))
		return ;
	bubble_sort();
	if (ft_lstsize(stacks()->sorted) >= 500)
		max_iterations();
	else
		min_iterations();
}

void	min_iterations(void)
{
	int		i;
	int		j;
	t_list	*temp;

	j = 0;
	while (j < ft_lstsize(stacks()->a))
	{
		temp = return_middle_min(&stacks()->sorted);
		i = 0;
		while (i <= MIN_IT && i < ft_lstsize(stacks()->a))
		{
			if (stacks()->a->content >= temp->content
				&& stacks()->a->content <= (temp->content + MIN_IT))
			{
				ft_push_b();
				i++;
			}
			else
				ft_rotate_a();
		}
		moves_b();
		j += i;
	}
}

t_list	*return_middle_min(t_list **start)
{
	static int		i = MIN_IT;
	int				j;
	t_list			*list;

	j = i;
	list = *start;
	while (j > 0 && list->next)
	{
		j--;
		list = list->next;
	}
	i += MIN_IT;
	return (list);
}

void	max_iterations(void)
{
	int		i;
	int		j;
	t_list	*temp;

	j = 0;
	while (j < ft_lstsize(stacks()->a))
	{
		temp = return_middle_max(&stacks()->sorted);
		i = 0;
		while (i <= MAX_IT && i < ft_lstsize(stacks()->a))
		{
			if (stacks()->a->content >= temp->content
				&& stacks()->a->content <= (temp->content + MAX_IT))
			{
				ft_push_b();
				i++;
			}
			else
				ft_rotate_a();
		}
		moves_b();
		j += i;
	}
}

t_list	*return_middle_max(t_list **start)
{
	static int		i = MAX_IT;
	int				j;
	t_list			*list;

	j = i;
	list = *start;
	while (j > 0 && list->next)
	{
		j--;
		list = list->next;
	}
	i += MAX_IT;
	return (list);
}
