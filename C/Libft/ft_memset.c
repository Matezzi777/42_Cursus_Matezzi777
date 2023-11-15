/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:49:59 by marvin            #+#    #+#             */
/*   Updated: 2023/11/08 10:49:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memset(void *ptr, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		&(ptr + i) = c;
		i++;
	}
	return (ptr);
}

// int	main(void)
// {
// 	char	
// }