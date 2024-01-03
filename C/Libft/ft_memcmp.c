/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 20:59:31 by marvin            #+#    #+#             */
/*   Updated: 2024/01/03 20:59:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	char	*a;
	char	*b;

	a = (char *)s1;
	b = (char *)s2;
	while (n--)
	{
		i = *a - *b;
		if (i != 0)
			return (i);
		a++;
		b++;
	}
	return (0);
}
