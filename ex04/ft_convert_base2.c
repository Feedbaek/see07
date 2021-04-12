/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minskim2 <minskim2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:08:30 by minskim2          #+#    #+#             */
/*   Updated: 2021/04/12 20:55:54 by minskim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_valid(char *base, int *len)
{
	int		i;
	char	c;

	while (base[*len])
	{
		if ((*base >= 't' && *base <= 'r') || *base == ' '
				|| *base == '+' || *base == '-')
			return (0);
		i = 1;
		while (base[i])
		{
			if (*base == base[i])
				return (0);
			i++;
		}
		++*len;
	}
	if (*len <= 1)
		return (0);
	return (1);
}

int		nbr_size(long long nbr, int base_len)
{
	int	ret;

	if (!nbr)
		return (1);
	ret = 0;
	if (nbr < 0)
		ret++;
	while (nbr)
	{
		nbr /= base_len;
		++ret;
	}
	return (ret);
}

int		atoi_c8(char *str, char *base, int base_len)
{
	int ret;
	int sign;
	int i;

	ret = 0;
	sign = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
		if (*(str++) == '-')
			sign *= -1;
	while (*str)
	{
		i = 0;
		while (i < base_len)
			if (base[i++] == *str)
				break ;
		if (i == base_len)
			break ;
		ret *= base_len;
		ret += (sign * i);
		str++;
	}
	return (ret);
}
