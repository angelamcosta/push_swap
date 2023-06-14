/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:46:17 by anlima            #+#    #+#             */
/*   Updated: 2023/06/03 22:00:58 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stacks	*stacks(void);
void		bubble_sort(void);
void		free_stacks(void);
int			ft_atoi(char *str);
void		free_list(t_list *stack);

t_stacks	*stacks(void)
{
	static t_stacks	stacks;

	return (&stacks);
}

int	ft_atoi(char *str)
{
	long long	nb;
	int			len;
	int			i;

	len = 0;
	while (str && str[len])
		len++;
	i = 0;
	nb = 0;
	if (str[i] == '-')
		i++;
	// add protection to wrong inputs
	while (i < len)
		nb = (nb * 10) + (str[i++] - 48);
	if (str[0] == '-')
		nb *= -1;
	if (is_overflow(nb))
	{
		write(1, "Error\n", 6);
		free_stacks();
		exit(0);
	}
	return (nb);
}

void	free_list(t_list *stack)
{
	t_list	*temp;

	while (stack)
	{
		temp = stack->next;
		free(stack);
		stack = temp;
	}
}

void	free_stacks(void)
{
	free_list(stacks()->a);
	free_list(stacks()->b);
	free_list(stacks()->sorted);
}

void	bubble_sort(void)
{
	int		temp;
	int		sorted;
	t_list	*start;

	sorted = 0;
	while (!sorted)
	{
		start = stacks()->sorted;
		sorted = 1;
		while (start->next)
		{
			if (start->content < start->next->content)
			{
				temp = start->content;
				start->content = start->next->content;
				start->next->content = temp;
				sorted = 0;
			}
			start = start->next;
		}
	}
}
