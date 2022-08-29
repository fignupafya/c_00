/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 15:22:40 by acigerim          #+#    #+#             */
/*   Updated: 2022/08/29 13:44:24 by acigerim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	bastir(int num)
{
	if (num >= 10)
	{
		bastir(num / 10);
		bastir(num % 10);
	}
	else
		ft_putchar(num + '0');
}

void	bastir1(int num)
{
	if (num >= 10)
	{
		bastir(num / 10);
		bastir(num % 10);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(num + '0');
	}
}

void	ft_print_comb2(void)
{
	int	s1;
	int	s2;

	s1 = 0;
	while (s1 < 99)
	{
		s2 = s1 + 1;
		while (s2 < 100)
		{
			bastir1(s1);
			ft_putchar(' ');
			bastir1(s2);
			if (s1 != 98)
				write(1, ", ", 2);
			s2++;
		}
		s1++;
	}
}
