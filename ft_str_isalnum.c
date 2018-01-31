/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isalnum.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaraval <tmaraval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 07:59:04 by tmaraval          #+#    #+#             */
/*   Updated: 2018/01/31 08:00:59 by tmaraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_str_isalnum(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (ft_isalnum(s[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
