/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:24:24 by marvin            #+#    #+#             */
/*   Updated: 2024/01/04 17:24:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcat(char *dest, char *src, size_t size);

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(src);
	while (i + j < size && i < j)
	{
		dest[i+j] = src[i];
		i++;
	}
	if ()
		dest[i] = '\0';
	return (i + j);
}

int	main(void)
{
	char	*src1 = "world";
	char	dest1[10] = "Hello, ";
	char	*src2 = "world";
	char	dest2[15] = "Hello, ";
	size_t	n = 2;
	printf("\nSource : %s\nDest. : %s\n", src1, dest1);
	printf("Strlcat : %ld\n", strlcat(dest1, src1, n));
	printf("Dest. %s\n\n", dest1);
	printf("Source : %s\nDest. : %s\n", src2, dest2);
	printf("Ft_strlcat : %ld\n", ft_strlcat(dest2, src2, n));
	printf("Dest. %s\n\n", dest2);
}