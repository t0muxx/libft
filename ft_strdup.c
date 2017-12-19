/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaraval <tmaraval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:10:40 by tmaraval          #+#    #+#             */
/*   Updated: 2017/12/19 12:02:55 by tmaraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*newchaine;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (s1[len] != '\0')
		len++;
	if ((newchaine = (char *)malloc(sizeof(char) * len + 1)) == NULL)
		return (NULL);
	while (i < len)
	{
		newchaine[i] = s1[i];
		i++;
	}
	newchaine[i] = '\0';
	return (newchaine);
}
