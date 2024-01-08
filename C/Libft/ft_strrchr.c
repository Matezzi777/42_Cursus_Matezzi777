/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:16:56 by marvin            #+#    #+#             */
/*   Updated: 2024/01/04 15:16:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *s, int c);

char	*ft_strrchr(char *s, int c)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	while (s[i - 1])
	{
		if (s[i - 1] == c)
			return (&s[i - 1]);
		i--;
	}
	return (NULL);
}
