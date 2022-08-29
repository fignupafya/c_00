/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:04:34 by acigerim          #+#    #+#             */
/*   Updated: 2022/08/29 14:09:24 by acigerim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_n;

void	putch(char c)
{
	write(1, &c, 1);
}

void	printrest(int *degisenliste)
{
	int	counter;

	counter = 0;
	while (counter < g_n - 1)
	{
		putch(degisenliste[counter] + '0');
		counter++;
	}
}

void	virgulkoy(int *degisenliste, int sonhane)
{	
	int	k;
	int	deger;
	int	normalmi;

	if (sonhane == 9)
	{
		normalmi = 0;
		deger = 8;
		k = g_n - 2;
		while (k >= 0)
		{
			if (degisenliste[k] != deger)
				normalmi = 1;
			deger--;
			k--;
		}
		if (normalmi == 1)
			write(1, ", ", 2);
	}
	else
		write(1, ", ", 2);
}

void	printfunc(int *num, int *degisenliste, int a, int strtpnt)
{
	int	sayac;

	sayac = strtpnt;
	if (a == g_n - 1)
	{
		while (sayac <= 9)
		{
			printrest(degisenliste);
			putch(sayac + '0');
			virgulkoy(degisenliste, sayac);
			sayac++;
		}
	}
	else
	{
		while (sayac <= (10 - g_n) + a)
		{
			degisenliste[a] = sayac;
			printfunc(num, degisenliste, a + 1, sayac + 1);
			sayac++;
			degisenliste[a] = num[a];
		}
	}
}

void	ft_print_combn(int n)
{
	int	degisenliste[9];
	int	i;
	int	num[9];

	g_n = n;
	i = 0;
	while (i < g_n)
	{
		num[i] = i;
		degisenliste[i] = i;
		i++;
	}
	printfunc(num, degisenliste, 0, 0);
}
