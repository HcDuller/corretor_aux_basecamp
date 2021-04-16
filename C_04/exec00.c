/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 19:59:35 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/15 01:37:35 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ex00/ft_strlen.c"

int	main(void)
{
	char str[] = "this is a simple string.";	
	printf("------------------------------------------------EX00------------------------------------------------\n");
	printf("------------------------------Escreva uma função que replique strlen()------------------------------\n");
	printf("string:	%s	||	strlen()	=	%d\n",str,(int)strlen(str));
	printf("string:	%s	||	ft_strlen()	=	%d\n",str,(int)ft_strlen(str));
	printf("----------------------------------------------------------------------------------------------------\n");
	printf("string:	%s				||	strlen()	=	%d\n","",(int)strlen(""));
	printf("string:	%s				||	ft_strlen()	=	%d\n","",(int)ft_strlen(""));
	printf("------------------------------------------------FIM-------------------------------------------------\n");
	return (0);
}