/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:05:44 by marvin            #+#    #+#             */
/*   Updated: 2024/01/02 16:05:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, unsigned int n);

void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned int	i;
	unsigned char	*a = s;
	i = 0;
	while (i < n)
	{
		*a = c;
		a++;
		i++;
	}
	return s;
}
