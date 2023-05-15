/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:02:23 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/15 09:03:20 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	is_word(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	if ((c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

char	lowercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

char	uppercase(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	status;

	i = 0;
	status = 1;
	while (str[i] != '\0')
	{
		if (is_word(str[i]))
		{
			if (status)
			{
				str[i] = uppercase(str[i]);
				status = 0;
			}
			else
				str[i] = lowercase(str[i]);
		}
		else
			status = 1;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str[] = "salut, comment tu vas ? 42mots quarante-deux;";
// 	printf("%s\n", ft_strcapitalize(str)); 
// 	return (0);
// }
