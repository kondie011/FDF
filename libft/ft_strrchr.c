/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knedzing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 16:03:41 by knedzing          #+#    #+#             */
/*   Updated: 2018/05/29 09:42:15 by knedzing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = -1;
	while (s[++i] != '\0')
		;
	i = i + 1;
	while (i >= 0)
	{
		if (s[--i] == c)
		{
			return ((char*)(s + i));
		}
	}
	return (NULL);
}
