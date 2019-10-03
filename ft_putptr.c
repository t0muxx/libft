/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaraval <tmaraval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 18:35:32 by tmaraval          #+#    #+#             */
/*   Updated: 2019/10/03 12:49:52 by tmaraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putptr(void *ptr)
{
	char buffer[64];

	if (ptr == 0)
		ft_putstr("nil");
	else
	{
		ft_ltoa_base((long)ptr, buffer, 16);
		ft_putstr("0x");
		ft_putstr(buffer);
	}
}
