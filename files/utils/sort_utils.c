/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:49:34 by anlima            #+#    #+#             */
/*   Updated: 2023/06/03 22:01:08 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	moves_b(void);
int		get_index(int nb);
int		find_biggest(void);

int	get_index(int nb)
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
	return (i);
}

int	find_biggest(void)
{
	int		i;
	t_list	*b;

	i = INT_MIN;
	b = stacks()->b;
	while (b)
	{
		if (b->content > i)
			i = b->content;
		b = b->next;
	}
	return (i);
}

void	moves_b(void)
{
	int	i;
	int	j;
	int	biggest;

	while (ft_lstsize(stacks()->b) > 0)
	{
		biggest = find_biggest();
		i = get_index(biggest);
		if (i == 0)
			ft_push_a();
		else if (i <= (ft_lstsize(stacks()->b) / 2))
		{
			j = 0;
			while (j++ < i)
				ft_rotate_b();
			ft_push_a();
		}
		else
		{
			j = ft_lstsize(stacks()->b) - i;
			while (j-- > 0)
				ft_reverser_b();
			ft_push_a();
		}
	}
}
