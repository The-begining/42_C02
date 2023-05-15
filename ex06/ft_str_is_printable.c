/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 00:12:41 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/13 00:16:45 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 32 && *(str + i) <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	char	str_pass[] = {"GVSM6uj bh6"};
// 	char	str_fail[] = {"\n"};
// 	char	str_pass1[] = {" "};

// 	printf("%d\n", ft_str_is_lowercase(str_pass));
// 	printf("%d\n", ft_str_is_lowercase(str_fail));
// 	printf("%d\n", ft_str_is_lowercase(str_pass1));
// 	return (0);
// }
