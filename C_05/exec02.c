/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 22:17:36 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/16 22:39:58 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ex02/ft_iterative_power.c"

void	ft_putnbr(int nb);
void	ft_putstr(char *str);

int	main(void)
{
	write(1,"------------------------------------------------EX02------------------------------------------------\n",101);
	write(1,"-------------------------Escreva uma funçao que retorne nb elevado a power--------------------------\n\n",102);
	ft_putstr("nb = 10 | pow = -1\n");
	ft_putstr("Valor esperado:		0\n");
	ft_putstr("Valor do avaliado:	");
	ft_putnbr(ft_iterative_power(10, -1));
	ft_putstr("\n\n");
	ft_putstr("nb = 10 | pow =  0\n");
	ft_putstr("Valor esperado:		1\n");
	ft_putstr("Valor do avaliado:	");
	ft_putnbr(ft_iterative_power(10, 0));
	ft_putstr("\n\n");
	ft_putstr("nb = 0 | pow =  0\n");
	ft_putstr("Valor esperado:		1\n");
	ft_putstr("Valor do avaliado:	");
	ft_putnbr(ft_iterative_power(0, 0));
	ft_putstr("\n\n");
	ft_putstr("nb = 3 | pow =  7\n");
	ft_putstr("Valor esperado:		2187\n");
	ft_putstr("Valor do avaliado:	");
	ft_putnbr(ft_iterative_power(3, 7));
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
