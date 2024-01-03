/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:11:17 by marvin            #+#    #+#             */
/*   Updated: 2024/01/03 17:11:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, void *src, unsigned int n)
{
	unsigned int	i;
	unsigned char	*a = src;
	unsigned char	*b = dest;

	i = 0;
	while (i < n)
	{
		*b = *a;
		a++;
		b++;
		i++;
	}
	return (dest);
}

int	main(void)
{
	char			src[21] = {'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A'};
	char			dest[21] = {'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B'};
	char			src2[21] = {'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A'};
	char			dest2[21] = {'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B', 'B'};
	unsigned int	i = 0;
	unsigned int	j = 0;
	printf("\nSource 1 : ");
	while (i < 20)
	{
		printf("[%c] ", src[i]);
		i++;
	}
	printf("\nSource 2 : ");
	while (j < 20)
	{
		printf("[%c] ", src2[j]);
		j++;
	}
	i = 0;
	j = 0;
	printf("\n\nDest. 1 : ");
	while (i < 20)
	{
		printf("[%c] ", dest[i]);
		i++;
	}
	printf("\nDest. 2 : ");
	while (j < 20)
	{
		printf("[%c] ", dest2[j]);
		j++;
	}

	memcpy(dest, src, 10);
	ft_memcpy(dest2, src2, 10);

	i = 0;
	j = 0;
	printf("\n\n\nSource 1 : ");
	while (i < 20)
	{
		printf("[%c] ", src[i]);
		i++;
	}
	printf("\nSource 2 : ");
	while (j < 20)
	{
		printf("[%c] ", src2[j]);
		j++;
	}
	i = 0;
	j = 0;
	printf("\n\nDest. 1 : ");
	while (i < 20)
	{
		printf("[%c] ", dest[i]);
		i++;
	}
	printf("\nDest. 2 : ");
	while (j < 20)
	{
		printf("[%c] ", dest2[j]);
		j++;
	}
	printf("\n\n");
}