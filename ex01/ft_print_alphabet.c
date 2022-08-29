/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 23:02:08 by acigerim          #+#    #+#             */
/*   Updated: 2022/08/26 23:54:37 by acigerim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		i;
	char	c;

	i = 1;
	c = 'a';
	while (i <= 26)
	{
		write(1, &c, 1);
		i++;
		c++;
	}
}
