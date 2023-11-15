/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 00:48:38 by marvin            #+#    #+#             */
/*   Updated: 2023/11/11 00:48:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char	*str)
{
	int	nombre;
	int	i;

	nombre = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nombre = nombre * 10;
		nombre = nombre + str[i] - '0';
		i++;
	}
	if (str[0] == '-')
	return (nombre);
}

int	size_needed(int n)
{
	// exemples :  100 -> 3 + 1 = 4
	// 			54321 -> 5 + 1 = 6
	// 			-54321 - > 5 + 2 = 7
	int	size;

	size = 1;
	if (n < 0)
		size++;
	while (n % 10 != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

// char	*ft_itoa(int n)
// {
// 	int	len;

// 	// 1. Récupérer la taille de la chaine à convertir (nbr chiffres de n +1 (+2 si nombre négatif))
// 	len = size_needed(n);
// }

#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("Nombre : %s --- Taille nécessaire : %d\n\n", argv[1], size_needed(ft_atoi(argv[1])));
	else
		printf("Erreur : Nombre d'arguments invalides.\n");
}