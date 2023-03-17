/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:14:31 by anlima            #+#    #+#             */
/*   Updated: 2023/03/17 16:22:27 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
	int	cont_a;
	int	cont_b;
}				t_stack;

void	ft_push_a(void);
void	ft_push_b(void);
void	ft_swap_a(void);
void	ft_swap_b(void);
void	ft_swap_ss(void);
int		ft_strlen(char *str);
char	*ft_strjoin(char *str1, char *str2);
int		ft_atoi(char *str);
t_stack	*stacks(void);
int		create_stacks(void);
void	populate_stacks(char **argv);

#endif
