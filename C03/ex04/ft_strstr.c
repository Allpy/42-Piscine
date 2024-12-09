/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermi <alermi@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:17:38 by alermi            #+#    #+#             */
/*   Updated: 2024/08/27 16:08:19 by alermi           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find )
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		a = 0;
		while (str[i + a] == to_find[a] && str[i + a] != '\0')
			a++;
		if (to_find[a] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
