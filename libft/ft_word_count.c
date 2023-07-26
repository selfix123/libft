/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbeaumon <zbeaumon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:56:35 by zbeaumon          #+#    #+#             */
/*   Updated: 2023/07/11 15:57:04 by zbeaumon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_word_count(char const *s, char c)
{
	size_t	i;
	size_t	count;
	int		trigger;

	i = 0;
	trigger = 1;
	count = 0;
	while (i <= ft_strlen(s))
	{
		if ((s[i] == c || s[i] == 0) && trigger == 0)
		{
			count++;
			trigger = 1;
		}
		else if (s[i] != c && trigger == 1)
			trigger = 0;
		i++;
	}
	return (count + 1);
}
