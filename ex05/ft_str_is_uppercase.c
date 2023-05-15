/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 00:09:17 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/13 00:17:01 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 65 && *(str + i) <= 90)
			i++;
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	char	str_pass[] = {"GVSMVSBGVD"};
// 	char	str_fail[] = {"fgssjudyg"};
// 	char	str_pass1[] = {"\0"};

// 	printf("%d\n", ft_str_is_lowercase(str_pass));
// 	printf("%d\n", ft_str_is_lowercase(str_fail));
// 	printf("%d\n", ft_str_is_lowercase(str_pass1));
// 	return (0);
// }
