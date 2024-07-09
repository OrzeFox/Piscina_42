/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicruz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:57:59 by dicruz            #+#    #+#             */
/*   Updated: 2024/07/09 20:15:07 by dicruz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (srt[i + j] == to_find[j] && to_find[j] != '\0')
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++
		}
		i++;
	}
	return (0);
}
