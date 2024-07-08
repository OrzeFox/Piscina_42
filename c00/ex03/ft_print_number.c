/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicruz <dicruz@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:02:23 by dicruz            #+#    #+#             */
/*   Updated: 2024/07/05 10:02:23 by dicruz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void    ft_print_numbers(void)
{
    int nbr;
    nbr = 48;
    while(nbr <= 57)
    {
        ft_putchar(nbr);
        nbr++;
    }
}

