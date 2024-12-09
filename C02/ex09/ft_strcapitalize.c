/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermi <alermi@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:23:52 by alermi            #+#    #+#             */
/*   Updated: 2024/08/25 19:35:06 by alermi           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	controllor;

	ft_strlowcase(str);
	i = 0;
	controllor = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (controllor == 1)
				str[i] = str[i] - 32;
			controllor = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			controllor = 0;
		else
		{
			controllor = 1;
		}
		i++;
	}
	return (str);
}
