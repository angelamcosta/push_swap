/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:46:17 by anlima            #+#    #+#             */
/*   Updated: 2023/03/17 16:22:34 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		ft_strlen(char *str);
char	*ft_strjoin(char *str1, char *str2);
int		ft_atoi(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *str1, char *str2)
{
	char	*new_string;
	int		i;

	new_string = (char *)malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
	if (!new_string)
		return (0);
	i = 0;
	while (str1 && *str1)
		new_string[i++] = *str1++;
	while (str2 && *str2)
		new_string[i++] = *str2++;
	new_string[i] = 0;
	return (new_string);
}

int	ft_atoi(char *str)
{
	long	nb;
	int		len;
	int		i;

	len = 0;
	while (str && str[len])
		len++;
	i = 0;
	nb = 0;
	if (str[i] == '-')
		i++;
	while (i < len)
		nb = (nb * 10) + (str[i++] - 48);
	if (str[0] == '-')
		nb *= -1;
	return (nb);
}
