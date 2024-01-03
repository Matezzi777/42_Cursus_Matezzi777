/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 12:43:50 by marvin            #+#    #+#             */
/*   Updated: 2024/01/04 12:43:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(char *str, char *to_find, size_t n);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_checkstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i])
	{
		if (str[i] != to_find[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	size_t	i;
	size_t	len_str;
	size_t	len_to_find;

	len_str = ft_strlen(str);
	len_to_find = ft_strlen(to_find);
	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while ((i <= (len_str - len_to_find)) && (i < n))
	{
		if (str[i] == to_find[0])
		{
			if (ft_checkstr((str + i), to_find))
			{
				return (str + i);
			}
		}
		i++;
	}
	return (0);
}
