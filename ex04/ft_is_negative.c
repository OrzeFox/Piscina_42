/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicruz <dicruz@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:11:32 by dicruz            #+#    #+#             */
/*   Updated: 2024/07/05 10:11:32 by dicruz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void ft_in_negative(int n)
{
    if(n < 0)
        ft_putchar('N');
    else
        ft_putchar('P');
}