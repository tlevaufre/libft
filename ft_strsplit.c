/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 14:47:07 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/12/05 00:44:18 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_cntltr(char const *s, size_t start, char sep)
{
	int	letters;

	letters = 1;
	while (s[start] && s[start] != sep)
	{
		start++;
		letters++;
	}
	return (letters);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	ptr;
	size_t	wrd;
	size_t	let;
	char	**tab;

	wrd = 0;
	let = 0;
	ptr = 0;
	if (!s || !(tab = malloc(sizeof(char *) * ft_cntwds(s, c) + 1)))
		return (NULL);
	while (wrd < ft_cntwds(s, c))
	{
		while (s[ptr] == c)
			ptr++;
		if (!(tab[wrd] = malloc(sizeof(char) * ft_cntltr(s, ptr, c) + 1)))
			return (NULL);
		while (s[ptr] && s[ptr] != c)
			tab[wrd][let++] = s[ptr++];
		tab[wrd][let] = '\0';
		let = 0;
		wrd++;
	}
	tab[wrd] = NULL;
	return (tab);
}
