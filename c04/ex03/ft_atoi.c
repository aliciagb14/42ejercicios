/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:55:11 by agonzale          #+#    #+#             */
/*   Updated: 2019/10/24 08:50:09 by agonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int a;
	int neg;

	i = 0;
	a = 0;
	neg = 1;
	while ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\t') ||
			(str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -neg;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		a = a + ((int)(str[i]) - '0');
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			a = a * 10;
		i++;
	}
	a = a * neg;
	return (a);
}
