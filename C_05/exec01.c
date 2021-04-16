/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 22:01:35 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/16 22:40:06 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ex01/ft_recursive_factorial.c"

void	ft_putnbr(int nb);
void	ft_putstr(char *str);

int	main(void)
{
	write(1,"------------------------------------------------EX01------------------------------------------------\n",101);
	write(1,"------------------------Escreva uma funçao que retorne o valor de n fatorial------------------------\n\n",102);
	ft_putstr("Para	n = -1\n");
	ft_putstr("Valor esperado:		0\n");
	ft_putstr("Valor do avaliado:	");
	ft_putnbr(ft_recursive_factorial(-1));
	ft_putstr("\n\n");
	ft_putstr("Para	n =	 0\n");
	ft_putstr("Valor esperado:		1\n");
	ft_putstr("Valor do avaliado:	");
	ft_putnbr(ft_recursive_factorial(0));
	ft_putstr("\n\n");
	ft_putstr("Para	n =	 1\n");
	ft_putstr("Valor esperado:		1\n");
	ft_putstr("Valor do avaliado:	");
	ft_putnbr(ft_recursive_factorial(1));
	ft_putstr("\n\n");
	ft_putstr("Para	n =	 12\n");
	ft_putstr("Valor esperado:		479001600\n");
	ft_putstr("Valor do avaliado:	");
	ft_putnbr(ft_recursive_factorial(12));
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
