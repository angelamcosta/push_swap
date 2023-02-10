/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:09:02 by anlima            #+#    #+#             */
/*   Updated: 2023/02/10 15:05:15 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	main(int argc, char **argv)
{	
	int		*a;
	int		i;
	int		j;

	a = (int *)malloc((sizeof(int)) * (argc - 1));
	if (!a)
		return (0);
	if (argc > 1)
	{
		i = 0;
		j = i;
		while (argv && argv[++i])
			a[j++] = ft_atoi(argv[i]);
		// testando a `stack`
		j = 0;
		while (a && a[j])
			printf("%i\n", a[j++]);
	}
	else
		write(1, "You need to pass arguments to populate stack a!\n", 48);
	return (0);
}
