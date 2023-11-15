/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:45:57 by marvin            #+#    #+#             */
/*   Updated: 2023/11/09 14:45:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_s1;
	int		len_s2;
	char	*str;
	int		i;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	str = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while(i < len_s1)
	{
		str[i] = s1[i];
		i++;
	}
	while(i < (len_s1 + len_s2))
	{
		str[i] = s2[i - len_s1];
		i++;
	}
	str[i] = '\0';
	return (str);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("s1 : %s (%d)\ns2 : %s (%d)\njoin : %s (%d)\n", argv[1], ft_strlen(argv[1]), argv[2], ft_strlen(argv[2]), ft_strjoin(argv[1], argv[2]), ft_strlen(ft_strjoin(argv[1], argv[2])));
	}
	else 
		printf("Erreur nombre d'arguments invalide.\n");
}