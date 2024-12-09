/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermi <alermi@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:38:12 by alermi            #+#    #+#             */
/*   Updated: 2024/08/26 15:59:53 by alermi           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	size_of_dest;
	int	size_of_src;

	size_of_dest = 0;
	size_of_src = 0;
	while (dest[size_of_dest] != '\0')
		size_of_dest++;
	while (src[size_of_src] != '\0')
	{
		dest[size_of_dest + size_of_src] = src[size_of_src];
		size_of_src++;
	}
	dest[size_of_dest + size_of_src] = '\0';
	return (dest);
}
