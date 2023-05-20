/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:14:31 by anlima            #+#    #+#             */
/*   Updated: 2023/05/20 23:36:05 by anlima           ###   ########.fr       */
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
	int				curr_index;
	int				final_index;
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
int			ft_atoi(char *str);
void		sort_all(int cont);
void		sort_stack_a(void);
void		sort_stack_all(void);
void		populate_stacks(char **argv);
t_list		*ft_lstnew(int content);
int			ft_lstsize(t_list *list);
void		ft_lstiter(t_list *list);
t_list		*ft_lstlast(t_list *list);
void		ft_lstadd_back(t_list **list, t_list *new);
int			is_sorted(t_list *list);
int			verify_str(char **argv);
int			is_overflow(char **argv);
int			has_repeats(t_list *list);

#endif
