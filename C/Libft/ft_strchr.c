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

int	main(void)
{
	char	*test = "FBCDEF";
	char	c1 = 'A';
	char	c2 = 'B';
	char	c3 = 'C';
	char	c4 = 'D';
	char	c5 = 'E';
	char	c6 = 'F';
	char	c7 = 'G';
	printf("\n1 :\n  strrchr : %p --- %s\nft_strrchr : %p --- %s\n", strchr(test, c1), strchr(test, c1), ft_strchr(test, c1), ft_strchr(test, c1));
	printf("\n2 :\n  strrchr : %p --- %s\nft_strrchr : %p --- %s\n", strchr(test, c2), strchr(test, c2), ft_strchr(test, c2), ft_strchr(test, c2));
	printf("\n3 :\n  strrchr : %p --- %s\nft_strrchr : %p --- %s\n", strchr(test, c3), strchr(test, c3), ft_strchr(test, c3), ft_strchr(test, c3));
	printf("\n4 :\n  strrchr : %p --- %s\nft_strrchr : %p --- %s\n", strchr(test, c4), strchr(test, c4), ft_strchr(test, c4), ft_strchr(test, c4));
	printf("\n5 :\n  strrchr : %p --- %s\nft_strrchr : %p --- %s\n", strchr(test, c5), strchr(test, c5), ft_strchr(test, c5), ft_strchr(test, c5));
	printf("\n6 :\n  strrchr : %p --- %s\nft_strrchr : %p --- %s\n", strchr(test, c6), strchr(test, c6), ft_strchr(test, c6), ft_strchr(test, c6));
	printf("\n7 :\n  strrchr : %p --- %s\nft_strrchr : %p --- %s\n", strchr(test, c7), strchr(test, c7), ft_strchr(test, c7), ft_strchr(test, c7));
}