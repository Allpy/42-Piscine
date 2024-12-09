/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermi <alermi@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:52:12 by alermi            #+#    #+#             */
/*   Updated: 2024/08/26 09:29:42 by alermi           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strsize(char *str)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
		a = i;
	}
	return (a);
}

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	a = ft_strsize(src);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (a);
}
