/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:14:31 by anlima            #+#    #+#             */
/*   Updated: 2023/06/07 15:39:45 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>
# define MIN_IT 5
# define MAX_IT 100

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}				t_list;

typedef struct s_stacks
{
	t_list	*a;
	t_list	*b;
	t_list	*sorted;
}				t_stacks;

void		ft_push_a(void);
void		ft_push_b(void);
void		ft_push(t_list **from, t_list **to);
void		ft_reverser_a(void);
void		ft_reverser_b(void);
void		ft_reverser_rr(void);
void		ft_reverser(t_list **from);
void		ft_rotate_a(void);
void		ft_rotate_b(void);
void		ft_rotate_rr(void);
void		ft_rotate(t_list **from);
void		ft_swap_a(void);
void		ft_swap_b(void);
void		ft_swap_ss(void);
void		ft_swap(t_list **from);
t_stacks	*stacks(void);
void		bubble_sort(void);
void		free_stacks(void);
int			ft_atoi(char *str);
void		free_list(t_list *stack);
void		populate_stacks(char **argv);
void		sort_small_list(t_list *start);
void		sort_iterations(int nb, int c, int k);
int			make_iterations(t_list **start, int nb);
void		make_moves(int nb, int c, int temp, int j);
void		moves_b(void);
int			get_index(int nb);
int			find_biggest(void);
void		sort_stack_a(void);
t_list		*ft_lstnew(int content);
int			ft_lstsize(t_list *list);
void		ft_lstiter(t_list *list);
t_list		*ft_lstlast(t_list *list);
void		ft_lstadd_back(t_list **list, t_list *new);
int			is_sorted(t_list *list);
int			verify_str(char **argv);
int			has_repeats(t_list *list);
int			is_overflow(long long nb);

#endif
