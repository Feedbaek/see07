/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minskim2 <minskim2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 16:20:46 by minskim2          #+#    #+#             */
/*   Updated: 2021/04/07 16:37:57 by minskim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strcpy(char *p, char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		p[i] = str[i];
		i++;
	}
	p[i] = 0;
}

char	*ft_strdup(char *str)
{
	int		len;
	char	*p;

	len = 0;
	while (str[len])
		len++;
	p = (char *)malloc(len + 1);
	if (p != 0)
		ft_strcpy(p, str);
	return (p);
}
