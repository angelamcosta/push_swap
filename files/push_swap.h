/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:14:31 by anlima            #+#    #+#             */
/*   Updated: 2023/02/09 15:56:03 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	struct t_node	*first;
	struct t_node	*last;
	int				len;
}				t_stack;

typedef struct s_node
{
	int				curr;
	struct s_node	*next;
}				t_node;

int		ft_strlen(char *str);
char	*ft_strjoin(char *str1, char *str2);
int		ft_atoi(char *str);
t_node	*ft_new_node(int nb);
void	ft_add_node(t_stack a, int nb);
void	ft_list_iter(t_stack a);

#endif