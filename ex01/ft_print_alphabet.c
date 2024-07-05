/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicruz <dicruz@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:02:49 by dicruz            #+#    #+#             */
/*   Updated: 2024/07/05 10:02:50 by dicruz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_print_alphabet()
{
        int     alph;

        alph = 'a';
        while(alph <= 'z'){
                ft_putchar(alph);
                alph++;
        }
}
