/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlevaufr <tlevaufr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:51:53 by tlevaufr          #+#    #+#             */
/*   Updated: 2017/11/22 16:05:22 by tlevaufr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (to_find[j] == 0)
		return ((char *)str);
	while (str[i])
	{
		while (to_find[j] == str[i] && to_find[j] && str[i])
		{
			j++;
			i++;
		}
		if (to_find[j])
			j = 0;
		else
			return ((char *)&str[i - j]);
		i++;
	}
	return (NULL);
}
