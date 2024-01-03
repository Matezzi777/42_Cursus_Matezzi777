/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:34:13 by marvin            #+#    #+#             */
/*   Updated: 2024/01/03 15:46:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int n);

//OK
int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

//OK
int		absolute(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}

//OK (inclus le \0)
int		size_to_malloc(int n)
{
	int	i;

	i = 2;
	if (n < 0)
		i++;
	while (n / 10 != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

//OK
char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*result;

	len = size_to_malloc(n);
	i = len - 2;
	result = (char *)malloc(len * sizeof(char));
	if (n == 0)
		result[0] = '0';
	if (n < 0)
		result[0] = '-';
	while (n != 0)
	{
		result[i] = absolute(n % 10) + '0';
		i--;
		n = n / 10;
	}
	result[len - 1] = '\0';
	return (result);
}
