/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:15:45 by anlima            #+#    #+#             */
/*   Updated: 2023/05/20 23:35:12 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_all(int cont);
void	sort_stack_a(void);
void	sort_stack_all(void);
void	populate_stacks(char **argv);

void	populate_stacks(char **argv)
{
	int		i;

	i = -1;
	while (argv && argv[++i])
		ft_lstadd_back(&(stacks()->a), ft_lstnew(ft_atoi(argv[i])));
	if (is_sorted(stacks()->a) || has_repeats(stacks()->a))
		return ;
	while (ft_lstsize(stacks()->a) > 3)
	{
		if (stacks()->a->next->content < stacks()->a->content)
			ft_swap_a();
		if (ft_lstlast(stacks()->a)->content < stacks()->a->content)
			ft_reverser_a();
		ft_push_b();
	}
	sort_stack_a();
}

void	sort_stack_a(void)
{
	if (stacks()->a->content > stacks()->a->next->content)
		if (stacks()->a->content > stacks()->a->next->next->content)
			ft_rotate_a();
		else
			ft_swap_a();
	else if (stacks()->a->next->content > stacks()->a->content && stacks()->a->next->content > stacks()->a->next->next->content)
		ft_reverser_a();
}

void	sort_stack_all(void)
{
	int		i;
	t_list	*a;

	i = 0;
	a = stacks()->a;
	while (a)
	{
		if (a->content < a->next->content)
			break ;
		i++;
		a = a->next;
	}
	if (i == 0)
		return ;
	if (i == 1)
		ft_swap_a();
	else
		sort_all(i - 1);
}

void	sort_all(int cont)
{
	int	i;

	i = cont;
	if (i <= ((ft_lstsize(stacks()->a) - 1) / 2))
	{
		ft_swap_a();
		while (i-- > 0)
		{
			ft_rotate_a();
			ft_swap_a();
		}
		i = cont;
		while (i-- > 0)
			ft_reverser_a();
	}
	else
	{
		i = ft_lstsize(stacks()->a) - 1 - cont;
		while (i-- > 0)
		{
			ft_reverser_a();
			ft_swap_a();
		}
		i = ft_lstsize(stacks()->a) - cont;
		while (i-- > 0)
			ft_rotate_a();
	}
}
