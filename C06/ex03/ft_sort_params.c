/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermi <alermi@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:53:06 by alermi            #+#    #+#             */
/*   Updated: 2024/09/04 16:34:43 by alermi           ###   ########.tr       */
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

void	ft_swap(char **arg1, char **arg2)
{
	char	*tmp;

	tmp = *arg1;
	*arg1 = *arg2;
	*arg2 = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char	**argv)
{
	int	i;
	int	j;
	int	min;

	i = 1;
	while (i < argc - 1)
	{
		min = i;
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[j], argv[min]) < 0)
				min = j;
			j++;
		}
		if (min != i)
			ft_swap(&argv[i], &argv[min]);
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		write(1, "\n", 1);
	}
}
