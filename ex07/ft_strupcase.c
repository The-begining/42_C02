/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 00:18:13 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/13 00:45:16 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 97 && *(str + i) <= 122)
		{
			*(str + i) = *(str + i) - 32;
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = {"hdKJGKKFGRDxkjh"};
// 	char	str1[] = {"fgssjudyg7"};
// 	char	str2[] = {"14514"};

// 	printf("%s\n", ft_strupcase(str));
// 	return (0);
// }
