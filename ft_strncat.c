/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/20 00:33:13 by doriol            #+#    #+#             */
/*   Updated: 2017/04/15 08:00:07 by doriol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	y;

	y = 0;
	i = ft_strlen(s1);
	while (s2[y] && n > 0)
	{
		s1[i] = s2[y];
		i++;
		y++;
		n--;
	}
	s1[i] = '\0';
	return (s1);
}
