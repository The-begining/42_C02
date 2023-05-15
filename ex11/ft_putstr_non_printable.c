/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsingh <shsingh@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:11:30 by shsingh           #+#    #+#             */
/*   Updated: 2023/03/15 19:44:11 by shsingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

void	generate_hex(char *str)
{
	char	digit;
	int		hex;

	hex = *(str) / 16;
	digit = '0' + hex;
	write(1, &digit, 1);
	if ((*(str) % 16) == 0 || (*(str) % 16) < 10)
	{
		hex = *(str) % 16;
		digit = 58 + (hex - 10);
	}
	else
	{
		hex = *(str) % 16;
		digit = 'a' + (hex - 10);
	}
	write(1, &digit, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	c;

	c = 92;
	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= '\0' && *(str + i) < 32)
		{
			write(1, &c, 1);
			generate_hex(str + i);
		}
		else
			write (1, (str + i), 1);
		i++;
	}
}

// int	main(void)
// {
// 	char str[] = {"Coucou\ntu vas bien ?"};
// 	ft_putstr_non_printable(str);
// 	return (0);
// }
