/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 23:45:32 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/15 19:47:15 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 97 && *(str + i) <= 122)
			i++;
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	char	str_pass[] = {"hdbmjhcbmsjhjhsbxkjh"};
// 	char	str_fail[] = {"fgssjudygG"};
// 	char	str_pass1[] = {"\0"};

// 	printf("%d\n", ft_str_is_lowercase(str_pass));
// 	printf("%d\n", ft_str_is_lowercase(str_fail));
// 	printf("%d\n", ft_str_is_lowercase(str_pass1));
// 	return (0);
// }
