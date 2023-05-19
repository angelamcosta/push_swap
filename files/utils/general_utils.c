/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:46:17 by anlima            #+#    #+#             */
/*   Updated: 2023/05/19 19:09:08 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stacks	*stacks(void);
int			ft_atoi(char *str);

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
