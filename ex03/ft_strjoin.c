/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minskim2 <minskim2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 20:07:00 by minskim2          #+#    #+#             */
/*   Updated: 2021/04/07 21:46:15 by minskim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long long	str_len(char *c)
{
	long long	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*p;
	char	*origin;
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (size == 0)
	{
		p = ((char *)malloc(1));
		*p = 0;
		return (p);
	}
	while (i < size)
	{
		len += str_len(strs[i]);
		i++;
	}
	p = (char *)malloc(len + (size - 1) * str_len(sep) + 1);
	origin = p;
	while (*strs)
	{
		p = ft_strcpy(p, *strs);
		if (strs + 1 == 0)
			break ;
		p = ft_strcpy(p, sep);
		strs++;
	}
	*p = 0;
	return (origin);
}
