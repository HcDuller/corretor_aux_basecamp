/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 01:47:02 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/16 16:06:58 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "ex03/ft_atoi.c"

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

void	exec_atoi(char *str)
{
	int a;
	int ft;

	ft_putstr("Para a string: ");
	ft_putstr(str);
	write(1, "\n", 1);
	a = atoi(str);
	ft = ft_atoi(str);
	if(a == ft)
		{
			ft_putstr("OK	(valor final:	");
			ft_putnbr(ft);
			ft_putstr(")\n");
		}
	else
	{
		ft_putstr("DEU RUIM\n");
		ft_putstr("atoi : ");
		ft_putnbr(a);
		ft_putstr("\n");
		ft_putstr("ft_atoi : ");
		ft_putnbr(ft);
	}	
	write(1, "----------------------------------------------------------------------------------------------------\n", 101);
}
int	main(void)
{	
	char empty[] = "";
	char allowed_chars_only[] = {9,10,11,12,13,32,'\0'};
	char num[] = "12345678";
	char signed_num[] = "-12345678";
	char mult_signed_num[] = "-+12345678";
	char allowed_chars[] = {9,10,11,12,13,32,'-','+',48,49,50,51,'\0'};
	char positive_m[] = "2147483647";
	char negative_m[] = "-2147483648";
	char over_maximum[] = "100000000000";

	write(1,"------------------------------------------------EX03------------------------------------------------\n",101);
	ft_putstr("Valores a comparar com atoi:\n");
	exec_atoi(empty);
	exec_atoi(allowed_chars_only);
	exec_atoi(num);
	exec_atoi(signed_num);
	exec_atoi(positive_m);
	exec_atoi(negative_m);	
	exec_atoi(over_maximum);
	ft_putstr("OBS: para valores superiores a INT_MAX/MIN(-2147483648 a 2147483647) o resultado tem que ser esquisito mesmo\n\n");
	ft_putstr("Valores que devem ser obtidos somente com ft_atoi:\n");
	ft_putstr("mult_signed:	");
	ft_putstr(mult_signed_num);
	ft_putstr("	|	");
	ft_putnbr(ft_atoi(mult_signed_num));
	ft_putstr("\n");
	ft_putstr("allowed_chars:	");
	ft_putstr(allowed_chars);
	ft_putstr("	|	");
	ft_putnbr(ft_atoi(allowed_chars));
	ft_putstr("\n");
	printf("Sim, essa linha de cima fica toda cagada, ela é cheia de caracteres especiais permitidos por ft_atoi.\n");
	printf("----------------------------------------------------------------------------------------------------\n");
	write(1,"------------------------------------------------FIM-------------------------------------------------\n",101);	
	return (0);
}