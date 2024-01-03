/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 18:19:15 by marvin            #+#    #+#             */
/*   Updated: 2024/01/03 18:19:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, void *src, unsigned int n);

void	*ft_memmove(void *dest, void *src, unsigned int n)
{
	unsigned int	i;
	unsigned char	*a;
	unsigned char	*b;
	unsigned char	temp;

	a = src;
	b = dest;
	i = 0;
	while (i < n)
	{
		temp = *a;
		*b = temp;
		a++;
		b++;
		i++;
	}
	return (dest);
}
