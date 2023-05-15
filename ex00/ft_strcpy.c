/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 23:35:12 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/15 18:10:10 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>

// int main(void)
// {
// 	char src[] = {"1234567"};
// 	char dest[] = {"ABCD"};
// 	printf("dest is - %s \n src is - %s\n",dest , src);
// 	printf("after copy dest is %s \n", ft_strcpy(dest, src));
// 	return (0);
// }
