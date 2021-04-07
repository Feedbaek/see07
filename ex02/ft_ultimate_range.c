/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minskim2 <minskim2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 18:09:07 by minskim2          #+#    #+#             */
/*   Updated: 2021/04/07 18:52:45 by minskim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	diff;
	int	i;

	if (min >= max)
		return (0);
	diff = max - min;
	*range = malloc(sizeof(int) * (max - min));
	i = 0;
	if (*range = 0)
		return (-1);
	arr = *range;
	while (min < max)
	{
		arr[i] = min++;
		i++;
	}
	return (diff);
}
