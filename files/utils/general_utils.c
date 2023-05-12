/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:46:17 by anlima            #+#    #+#             */
/*   Updated: 2023/05/12 14:29:54 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*stacks(void);
int		ft_atoi(char *str);
int		is_numeric(char c);
int		is_valid(char **argv);
int		verify_str(char *str);

t_stack	*stacks(void)
{
	static t_stack	stacks;

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
	while (i < len)
	{
		nb = (nb * 10) + (str[i++] - 48);
		if (nb > INT_MAX)
			return (-1);
	}
	if (str[0] == '-')
		nb *= -1;
	return (nb);
}

int	is_valid(char **argv)
{
	int	i;

	i = 1;
	while (argv && argv[i])
	{
		if (!verify_str(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

int	is_numeric(char c)
{
	return (c >= 48 && c <= 57);
}

int	verify_str(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		if (!is_numeric(str[i]))
			return (0);
		i++;
	}
	return (1);
}
