/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicruz <dicruz@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:39:32 by dicruz            #+#    #+#             */
/*   Updated: 2024/07/09 13:39:32 by dicruz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_str_is_alpha(char *str)
{
    unsigned int i;

    i = 0;
    while (str[i])
    {
        if(!(str[i] >= 65 && str [i] <= 90) && !(str[i] >= 97 && str[i] <= 122)){
            return (0);
        }
        i++;
    }
    return (1);
}

int     ft_str_is_numeric(char *str)
{
    unsigned int i;

    i = 0;
    while (str[i])
    {
        if(!(str[i] >= 48 && str [i] <= 57)){
            return (0);
        }
        i++;
    }
    return (1);
}


int isalphanumeric(char *str)
{
    unsigned int i;

    i = 0;
    if(ft_str_is_alpha(str) != 1 )
}

char *ft_strcapitalize(char *str)
{
    unsigned int i;
    unsigned int isnotchar;

    isnotchar = 0;
    i = 0;
    while(str[i])
    {
        if(str[i] =)
    }
    return(str);
}