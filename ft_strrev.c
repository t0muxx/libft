/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomlulu <tomlulu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 14:08:55 by tomlulu           #+#    #+#             */
/*   Updated: 2018/01/07 14:17:53 by tomlulu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrev(char *str)
{
    int i;
	int j;
	char temp;

	i = ft_strlen(str) - 1;
	j = 0;
    while (i > j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i--;
        j++;
    }
    return (str);
}
