/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:55:58 by marvin            #+#    #+#             */
/*   Updated: 2024/01/04 14:55:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(char *s, int c);

char	*ft_strchr(char *s, int c)
{
	int		i;
	char	*a;

	a = s;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (a);
		a++;
		i++;
	}
	return (NULL);
}
