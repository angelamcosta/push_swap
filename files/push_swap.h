/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:14:31 by anlima            #+#    #+#             */
/*   Updated: 2023/03/20 14:02:20 by anlima           ###   ########.fr       */
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
void	ft_push(int *a, int *b, int *cont_a, int *cont_b);
void	ft_reverser_a(void);
void	ft_reverser_b(void);
void	ft_reverser_rr(void);
void	ft_reverser(int *a, int cont_a);
void	ft_rotate_a(void);
void	ft_rotate_b(void);
void	ft_rotate_rr(void);
void	ft_rotate(int *a, int cont_a);
void	ft_swap_a(void);
void	ft_swap_b(void);
void	ft_swap_ss(void);
void	ft_swap(int *a);
t_stack	*stacks(void);
int		ft_atoi(char *str);
int		create_stacks(void);
void	populate_stacks(char **argv);
void	sort_stack_a(void);
void	sort_stack_b(void);
void	sort_all(void);

#endif
