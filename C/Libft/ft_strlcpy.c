/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 23:41:30 by marvin            #+#    #+#             */
/*   Updated: 2024/01/03 23:41:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i != 0)
		dest[i] = '\0';
	return (i);
}

int	main(void)
{
	char	*source = "Bonjour";
	char	*dest1 = "Au revoir";
	char	*dest2 = "Au revoir";

	printf("\nSource : %s\n\nDestination 1 : %s\nDestination 2 : %s\n\n", source, dest1, dest2);

	printf("Strlcpy : %ld\n", strlcpy(dest1, source, 0));
	printf("Destination 1 : %s\n\n", dest1);
	printf("Ft_strlcpy : %ld\n", ft_strlcpy(dest2, source, 0));
	printf("Destination 2 : %s\n", dest2);
}