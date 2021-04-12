/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minskim2 <minskim2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:41:41 by minskim2          #+#    #+#             */
/*   Updated: 2021/04/12 21:16:57 by minskim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		nbr_size(long long nbr, int base_len);
int		is_valid(char *base, int *len);
int		atoi_c8(char *str, char *base, int base_len);

char	*putnbr_c8(int nbr, char *base, int base_len)
{
	long long	tmp;
	char		*result;
	int			size;

	tmp = nbr;
	size = nbr_size(tmp, base_len);
	ret = (char*)malloc(size + 1);
	result[size] = 0;
	if (nbr == 0)
	{
		result[0] = base[0];
		return (result);
	}
	if (tmp < 0)
		tmp *= -1;
	while (tmp)
	{
		result[--size] = base[tmp % base_len];
		tmp /= base_len;
	}
	if (nbr < 0)
		result[0] = '-';
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int f_len;
	int t_len;

	if (!is_valid(base_from, &f_len) || !is_valid(base_to, &t_len))
		return (0);
	return (putnbr_c8(atoi_c8(nbr, base_from, f_len), base_to, t_len));
}
