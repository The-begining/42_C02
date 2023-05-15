/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 00:36:35 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/13 00:45:36 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 65 && *(str + i) <= 90)
		{
			*(str + i) = *(str + i) + 32;
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = {"hdHGHh"};

// 	printf("%s\n", ft_strlowcase(str));
// 	return (0);
// }
