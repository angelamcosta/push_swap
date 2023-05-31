/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verifications_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:12:50 by anlima            #+#    #+#             */
/*   Updated: 2023/05/31 14:47:06 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_sorted(t_list *list);
int	verify_str(char **argv);
int	has_repeats(t_list *list);
int	is_overflow(long long nb);

int	is_sorted(t_list *list)
{
	while (list)
	{
		if (list->next && (list->content > list->next->content))
			return (0);
		list = list->next;
	}
	return (1);
}

int	is_overflow(long long nb)
{
	return (nb > INT_MAX || nb < INT_MIN);
}

int	has_repeats(t_list *list)
{
	t_list	*copy;

	while (list)
	{
		copy = list->next;
		while (copy)
		{
			if (copy->content == list->content)
				return (1);
			copy = copy->next;
		}
		list = list->next;
	}
	return (0);
}

int	verify_str(char **argv)
{
	int	i;
	int	signal;

	i = -1;
	signal = 0;
	while (argv && argv[++i])
	{
		if (*argv[i] == '-')
			signal++;
		else if (!(*argv[i] >= 48 && *argv[i] <= 57))
			return (0);
		if (signal > 1)
			return (0);
	}
	return (1);
}
