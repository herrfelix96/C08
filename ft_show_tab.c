/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fharutyu <fharutyu@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 17:18:42 by fharutyu          #+#    #+#             */
/*   Updated: 2025/09/08 15:11:08 by fharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(int num);

void	ft_show_tab(struct s_stock_str *par)
{
	int	j;

	while (par->str[0] != '0')
	{
		j = 0;
		while (par->str[j] != '\0')
		{
			write(1, &(par->str[j]), 1);
			j++;
		}
		write(1, "\n", 1);
		ft_putchar(par->size);
		write(1, "\n", 1);
		j = 0;
		while (par->copy[j] != '\0')
		{
			write(1, &(par->copy[j]), 1);
			j++;
		}
		write(1, "\n", 1);
		par++;
	}
}

void	ft_putchar(int num)
{
	char	c;

	if (num <= 9)
	{
		c = num + '0';
		write(1, &c, 1);
		return ;
	}
	else
	{
		ft_putchar(num / 10);
		c = (num % 10) + '0';
		write(1, &c, 1);
	}
}
