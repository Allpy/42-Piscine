/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermi <alermi@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:10:33 by alermi            #+#    #+#             */
/*   Updated: 2024/09/03 17:59:10 by alermi           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sq;

	sq = 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while ((sq * sq) != nb && sq < nb)
		sq++;
	if ((sq * sq) > nb)
		return (0);
	return (sq);
}
