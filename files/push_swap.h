/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:14:31 by anlima            #+#    #+#             */
/*   Updated: 2023/05/12 14:30:50 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

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
int		is_numeric(char c);
int		is_valid(char **argv);
int		verify_str(char *str);
void	sort_stack_a(void);
int		create_stacks(void);
void	sort_stack_all(void);
void	sort_all(int i, int j);
void	populate_stacks(char **argv);
int		is_sorted(int *a);
int		is_overflow(char **argv);
int		has_repeats(int *a, int size_a);

#endif
