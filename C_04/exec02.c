/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 01:47:02 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/15 02:47:20 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ex02/ft_putnbr.c"

int	main(void)
{
	write(1,"------------------------------------------------EX00------------------------------------------------\n",101);
	write(1,"----------------------O exercicio esta correto caso seja impresso 0 logo abaixo---------------------\n\n",102);
	write(1,"                                                 ",49);
	ft_putnbr(0);
	write(1,"                                                  \n\n",52);
	write(1,"-----------------O exercicio esta correto caso seja impresso -2147483648 logo abaixo----------------\n",101);
	write(1,"                                            ",44);
	ft_putnbr(-2147483648);
	write(1,"                                           \n\n",45);
	write(1,"-----------------O exercicio esta correto caso seja impresso 2147483647 logo abaixo-----------------\n",101);
	write(1,"                                             ",45);
	ft_putnbr(2147483647);
	write(1,"                                           \n\n",45);
	//printf("----------------------------------------------------------------------------------------------------\n");
	write(1,"------------------------------------------------FIM-------------------------------------------------\n",101);
	return (0);
}