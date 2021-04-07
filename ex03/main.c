/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minskim2 <minskim2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:23:43 by minskim2          #+#    #+#             */
/*   Updated: 2021/04/07 21:45:14 by minskim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(int n, char *a[])
{
	char *x;

	x = ft_strjoin(3, a + 1, "||");
	printf("%s", x);
	return (0);
}
