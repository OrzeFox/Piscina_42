/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicruz <dicruz@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:21:44 by dicruz            #+#    #+#             */
/*   Updated: 2024/07/05 10:21:44 by dicruz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void ft_print_comb()
{
    char nmbr1;
    char nmbr2;
    char nmbr3;

    nmbr1 = '0';
    nmbr2 = '1';
    nmbr3 = '2';
    while(nmbr1 != '8')
    {
        ft_putchar(nmbr1);
        nmbr1++;
        while (nmbr2 != '9')
        {
            ft_putchar(nmbr2);
            nmbr2++;
            while (nmbr3 )
            {
                /* code */
            }
            
        }
        
    }
}
