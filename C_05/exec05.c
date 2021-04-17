/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 01:13:44 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/17 03:24:24 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ex05/ft_sqrt.c"

void	ft_putnbr(int nb);
void	ft_putstr(char *str);

int	main(void)
{
	write(1,"------------------------------------------------EX05------------------------------------------------\n",101);
	write(1,"-----------------------Escreva uma funçao que etermine se um numero é primo-------------------------\n\n",102);
	ft_putstr("	Nº	-10\n");
	ft_putstr("Valor esperado:		0\n");
	ft_putstr("Valor do avaliado:	");
	ft_putnbr(ft_sqrt(-1));
	ft_putstr("\n\n");
	ft_putstr("	Nº	0\n");
	ft_putstr("Valor esperado:		0\n");
	ft_putstr("Valor do avaliado:	");
	ft_putnbr(ft_sqrt(0));
	ft_putstr("\n\n");
	ft_putstr("	Nº	1\n");
	ft_putstr("Valor esperado:		1\n");
	ft_putstr("Valor do avaliado:	");
	ft_putnbr(ft_sqrt(1));
	ft_putstr("\n\n");
	ft_putstr("	Nº	16\n");
	ft_putstr("Valor esperado:		4\n");
	ft_putstr("Valor do avaliado:	");
	ft_putnbr(ft_sqrt(16));
	ft_putstr("\n\n");
	ft_putstr("	Nº	50\n");
	ft_putstr("Valor esperado:		0\n");
	ft_putstr("Valor do avaliado:	");
	ft_putnbr(ft_sqrt(50));
	ft_putstr("\n\n");
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
