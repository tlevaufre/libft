/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:37:31 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/11/14 15:15:59 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnew(size_t size)
{
	size_t	t;
	char	*str;
	
	t = 0;
	if (!(str = malloc(size of(char) * size + 1)))
		return (NULL);
	while (t <= size)
	{
		str[t] = '\0';
		t++;
	}
	str[t] = '\0'
	return (str);
}
