/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbeaumon <zbeaumon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:01:22 by zbeaumon          #+#    #+#             */
/*   Updated: 2023/07/11 16:05:23 by zbeaumon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isint(char *str)
{
	int	len;
	int	i;

	len = ft_strlen(str);
	i = 0;
	if (str[i] == '-' && str[i + 1] != '\0' && i < len)
		i++;
	while (i < len)
	{
		if (ft_isdigit(str[i]) == 0)
			return (1);
		i++;
	}
	if (len > 11)
		return (1);
	if (len == 11 && ft_liatoi(str) < INT_MIN)
		return (1);
	if (len == 10 && ft_liatoi(str) > INT_MAX)
		return (1);
	return (0);
}
