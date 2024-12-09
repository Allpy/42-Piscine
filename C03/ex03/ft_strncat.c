/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermi <alermi@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:00:38 by alermi            #+#    #+#             */
/*   Updated: 2024/08/26 19:13:29 by alermi           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	l1;
	unsigned int	l2;

	l1 = 0;
	l2 = 0;
	while (dest[l1] != '\0')
		l1++;
	while (src[l2] != '\0' && l2 < n)
	{
		dest[l1 + l2] = src[l2];
		l2++;
	}
	dest[l1 + l2] = '\0';
	return (dest);
}
