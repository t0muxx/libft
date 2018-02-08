/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isalnum.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomlulu <tomlulu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 18:12:07 by tomlulu           #+#    #+#             */
/*   Updated: 2018/01/30 18:23:57 by tomlulu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_str_isalnum(const char *s)
{
	char *str;

	str = (char *)s;
	while (*str)
	{
		if (ft_isalnum(*str) == 0)
			return (0);
		str++;
	}
	return (1);
}
