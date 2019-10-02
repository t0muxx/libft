/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaraval <tmaraval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 18:35:32 by tmaraval          #+#    #+#             */
/*   Updated: 2019/10/02 18:36:50 by tmaraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putptr(void *ptr)
{
	char buffer[64];

	ft_putstr("0x");
	ft_ltoa_base((long)ptr, buffer, 16);
	ft_putendl(buffer);
}
