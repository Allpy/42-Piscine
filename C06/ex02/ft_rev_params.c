/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermi <alermi@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 07:50:45 by alermi            #+#    #+#             */
/*   Updated: 2024/09/04 19:14:11 by alermi           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (str);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (argv[i])
	{
		ft_putstr(argv[argc - 1]);
		write(1, "\n", 1);
		i++;
		argc--;
	}
	return (0);
}
