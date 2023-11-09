/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:08:03 by marvin            #+#    #+#             */
/*   Updated: 2023/11/09 15:08:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

//OK
int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

//OK
int	nbr_mots(char const *s, char sep)
{
	int	i;
	int	mots;

	i = 0;
	mots = 1;
	while (s[i])
	{
		if (s[i] == sep)
			mots++;
		i++;
	}
	return (mots);
}

//OK
int	taille_nieme_mot(char const *str, char sep, int	n)
{
	int	compteur_mot;
	int	compteur_taille;
	int	i;

	i = 0;
	compteur_mot = 1;
	compteur_taille = 0;
	while (str[i])
	{
		if (str[i] == sep && compteur_mot == n)
			break;
		compteur_taille++;
		if (str[i] == sep)
		{
			compteur_taille = 0;
			compteur_mot++;
		}
		i++;
	}
	return (compteur_taille);
}

//OK
void	fill_tab(char **tab, char const *str, char sep)
{
	int	i;
	int	mot;
	int	lettre;

	i = 0;
	mot = 0;
	lettre = 0;
	while (str[i])
	{
		if (str[i] == sep)
		{
			tab[mot][lettre] = '\0';
			mot++;
			lettre = 0;
		}
		else
		{
			tab[mot][lettre] = str[i];
			lettre++;
		}
		i++;
	}
	tab[mot][lettre] = '\0';
}

//OK
char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		nombre_mots;
	int		i;

	nombre_mots = nbr_mots(s, c);
	tab = (char **)malloc((nombre_mots + 1) * sizeof(char *));
	i = 0;
	while (i < nombre_mots)
	{
		tab[i] = (char *)malloc((taille_nieme_mot(s, c, (i + 1)) + 1) * sizeof(char));
		i++;
	}
	tab[i] = NULL;
	fill_tab(tab, s, c);
	return (tab);
}