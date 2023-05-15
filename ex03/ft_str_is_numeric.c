/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 23:25:12 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/15 18:06:34 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 48 && *(str + i) <= 57)
			i++;
		else
			return (0);
	}
	return (1);
}

// int	main()
// {
// 	char str_pass[] = {"12034762342"};
// 	char str1_fail[] = {"4567%76"};
// 	char str2_pass[] = {"\0"};

// 	printf("%d\n", ft_str_is_numeric(str_pass));
// 	printf("%d\n", ft_str_is_numeric(str1_fail));
// 	printf("%d\n", ft_str_is_numeric(str2_pass));
// 	return (0);
// }
