/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:48:42 by marvin            #+#    #+#             */
/*   Updated: 2024/01/03 15:48:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, unsigned int n);

void	ft_bzero(void *s, unsigned int n)
{
	unsigned int	i;
	unsigned char	*a = s;

	i = 0;
	while (i < n)
	{
		*a = '\0';
		a++;
		i++;
	}
}
