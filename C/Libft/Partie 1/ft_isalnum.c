/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:59:07 by marvin            #+#    #+#             */
/*   Updated: 2023/11/06 16:59:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(char	c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

#include <stdio.h>

int	main(void)
{
	char	test0 = 'a';
	char	test1 = 'z';
	char	test2 = 'A';
	char	test3 = 'Z';
	char	test4 = '9';
	char	test5 = '0';
	char	test6 = '\n';
	printf("%c : %d\n%c : %d\n%c : %d\n%c : %d\n%c : %d\n%c : %d\n%c : %d\n", test0, ft_isalnum(test0), test1, ft_isalnum(test1), test2, ft_isalnum(test2), test3, ft_isalnum(test3), test4, ft_isalnum(test4), test5, ft_isalnum(test5), test6, ft_isalnum(test6));
}