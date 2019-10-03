/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaraval <tmaraval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 18:07:31 by tmaraval          #+#    #+#             */
/*   Updated: 2019/10/03 12:51:43 by tmaraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_ltoa_cnt_digit(long nb, int base)
{
	int cnt;

	cnt = 0;
	while (nb != 0)
	{
		nb = nb / base;
		cnt++;
	}
	return (cnt);
}

void	ft_ltoa_base_do(long nb, char *buffer, int base, int sign)
{
	int		i;
	char	charset[17];
	int		cnt;

	cnt = ft_ltoa_cnt_digit(nb, base);
	i = 1;
	ft_strcpy(charset, "0123456789abcdef");
	while (nb != 0)
	{
		buffer[cnt + sign - i] = charset[nb % base];
		nb /= base;
		i++;
	}
	if (sign && base == 10)
		buffer[0] = '-';
	buffer[cnt + sign] = '\0';
}

void	ft_ltoa_base(long nb, char *buffer, int base)
{
	int sign;

	sign = (nb < 0);
	if (sign == 1 && base == 10)
		nb = nb * -1;
	if (!nb)
	{
		ft_strncpy(buffer, "0\0", 2);
		return ;
	}
	ft_ltoa_base_do(nb, buffer, base, sign);
	return ;
}
