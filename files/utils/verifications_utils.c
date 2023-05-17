/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verifications_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:12:50 by anlima            #+#    #+#             */
/*   Updated: 2023/05/17 14:58:53 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_sorted(int *a);
int	is_overflow(char **argv);
int	has_repeats(void);

int	is_sorted(int *a)
{
	int	i;

	i = -1;
	while (a && a[++i])
	{
		if (a[i + 1] && (a[i] > a[i + 1]))
			return (0);
	}
	return (1);
}

int	has_repeats(void)
{
	int	i;
	int	j;
	int	*b;

	i = -1;
	b = (int *)malloc(sizeof(int) * stacks()->size_a);
	if (!b)
		return (0);
	while (stacks()->a && stacks()->a[++i])
	{
		j = 0;
		while (b && j < i)
		{
			if (b[j] == stacks()->a[i])
			{
				free(b);
				return (1);
			}
			j++;
		}
		b[i] = stacks()->a[i];
	}
	free(b);
	return (0);
}

int	is_overflow(char **argv)
{
	int	i;
	int	temp;

	i = -1;
	while (argv && argv[++i])
	{
		temp = ft_atoi(argv[i]);
		if (temp == -1)
			return (1);
	}
	return (0);
}
