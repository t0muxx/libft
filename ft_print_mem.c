/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_mem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaraval <tmaraval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 08:38:49 by tmaraval          #+#    #+#             */
/*   Updated: 2019/10/16 12:21:40 by tmaraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	fill_sixteen_bytes(void *mem, unsigned char *sixteen_bytes, size_t size)
{
	int i;
	unsigned char *mem_c;

	i = 0;
	while (i < (int)size)
	{
		mem_c = (unsigned char *)mem;	
		sixteen_bytes[i] = *mem_c;
		i++;
		mem++;
	}
}

void	print_bytes(unsigned char *sixteen_bytes, size_t size)
{
	int i;
	int j;
	int nb;
	char *base = "0123456789abcdef";

	i = 0;
	j = 0;
	while (i < (int)size)
	{
		j = 0;
		while (j < 2)
		{
			nb = sixteen_bytes[i] / 16;
			ft_putchar(base[nb]);
			nb = sixteen_bytes[i] % 16;
			ft_putchar(base[nb]);
			i++;
			j++;
		}
		ft_putstr(" ");
	}
}

void	print_bytes_char(unsigned char *sixteen_bytes, size_t size)
{
	int i;

	i = 0;
	while (i < (int)size)
	{
		if (ft_isprint(sixteen_bytes[i]))
			ft_putchar(sixteen_bytes[i]);
		else
			ft_putchar('.');
		i++;
	}
	ft_putendl("");
}

void	pad_space(size_t read)
{
	size_t i;

	i = 0;
	while (i < 38 - (read * 2))
	{
			ft_putchar(' ');
			i++;
	}
}

void	ft_print_mem(void *mem, size_t size)
{
	unsigned char	sixteen_bytes[16];
	size_t	read;
	void	*stop;

	read = 0;
	stop = (void *)mem + size;
	while ((void *)mem < stop)
	{
		if ((void *)mem + 16 > stop)
			read = (void *)stop - mem;
		else
			read = 16;
		ft_putptr(mem);
		ft_putstr(": ");
		fill_sixteen_bytes(mem, sixteen_bytes, read);
		print_bytes(sixteen_bytes, read);
		if (read < 16)
			pad_space(read);
		print_bytes_char(sixteen_bytes, read);
		mem = (void *) mem + read;
	}
}
