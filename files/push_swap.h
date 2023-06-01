/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:14:31 by anlima            #+#    #+#             */
/*   Updated: 2023/06/02 00:31:50 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

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
void		populate_stack_b(void);
void		populate_stacks(char **argv);
t_list		*return_middle(t_list **start);
void		ft_sort(void);
void		sort_stack_a(void);
void		sort_all(int i, int j);
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
