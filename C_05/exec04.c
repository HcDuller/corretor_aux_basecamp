/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 23:42:24 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/17 01:36:02 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 22:40:23 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/16 23:42:03 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ex04/ft_fibonacci.c"

void	ft_putnbr(int nb);
void	ft_putstr(char *str);

int	main(void)
{
	write(1,"------------------------------------------------EX04------------------------------------------------\n",101);
	write(1,"-------------------------Escreva uma funçao que retorne nb elevado a power--------------------------\n\n",102);
	ft_putstr("	Fibo	Nº	-10\n");
	ft_putstr("Valor esperado:		-1\n");
	ft_putstr("Valor do avaliado:	");
	ft_putnbr(ft_fibonacci(-1));
	ft_putstr("\n\n");	
	ft_putstr("	Fibo	Nº	0\n");
	ft_putstr("Valor esperado:		0\n");
	ft_putstr("Valor do avaliado:	");
	ft_putnbr(ft_fibonacci(0));
	ft_putstr("\n\n");	
	ft_putstr("	Fibo	Nº	1\n");
	ft_putstr("Valor esperado:		1\n");
	ft_putstr("Valor do avaliado:	");
	ft_putnbr(ft_fibonacci(1));
	ft_putstr("\n\n");
	ft_putstr("	Fibo	Nº	2\n");
	ft_putstr("Valor esperado:		1\n");
	ft_putstr("Valor do avaliado:	");
	ft_putnbr(ft_fibonacci(2));
	ft_putstr("\n\n");	
	ft_putstr("	Fibo	Nº	10\n");
	ft_putstr("Valor esperado:		55\n");
	ft_putstr("Valor do avaliado:	");
	ft_putnbr(ft_fibonacci(10));
	ft_putstr("\n\n");	
	ft_putstr("	Fibo	Nº	39\n");
	ft_putstr("Valor esperado:		63245986\n");
	ft_putstr("Valor do avaliado:	");
	ft_putnbr(ft_fibonacci(39));
	ft_putstr("\n");	
	write(1,"------------------------------------------------FIM-------------------------------------------------\n",101);
	return (0);
}
void	ft_putstr(char *str)
{
	if (*str)
	{
		write(1, str, 1);
		ft_putstr(str + 1);
	}
}

void	ft_putnbr(int nb)
{
	int p;
	int fat;

	fat = nb < 0 ? -1 : 1;
	if (fat == -1)
		write(1, "-", 1);
	if (nb / 10 != 0)
		ft_putnbr(fat * (nb / 10));
	p = fat * (nb % 10) + 48;
	write(1, &p, 1);
}
