/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:06:19 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/15 19:02:59 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	if (size == '0')
		return (0);
	while (*(src + i) && --size)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	while (*(src + i))
		++i;
	return (i);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char src[] = {"Test strlcpy"};
// 	char dest[7];
// 	//printf("%d\n%s",strlcpy(dest, src, 8), dest);
// 	printf("%d\n %s", ft_strlcpy(dest, src, 7), dest);
// 	return (0);
// }
