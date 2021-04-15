/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:00:20 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/14 01:12:03 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ex01/ft_strncmp.c"

int	main(void)
{
	char *s1;
	char *s2;
	char *s3;
	char *s4;	
	char s5[] = {'a', 'b', 'c', -10, -20, '\0'};
	int n = 6;
	

	s1 = calloc(10, sizeof(char)); 
	s2 = calloc(8, sizeof(char)); 
	s3 = calloc(10, sizeof(char)); 
	s4 = calloc(10, sizeof(char)); 
	strcpy(s1,"abcdefghi");
	strcpy(s2,"aBcDEfg");
	strcpy(s3,"abcdEfghi");
	strcpy(s4,"ab0defghi");
	
	printf("================================EX01===================================\n");
	printf("=======================================================================\n");
	printf("strncmp(%s,%s, %d) 		=	%d\n",		s1,s2,n, strncmp(		s1,	s2, n));
	printf("ft_strncmp(%s, %s, %d)	=	%d\n",		s1,s2,n, ft_strncmp(	s1,	s2, n));
	printf("=======================================================================\n");
	printf("strncmp(%s,%s, %d) 	=	%d\n",			s1,s3,n, strncmp(		s1,	s3, n));
	printf("ft_strncmp(%s, %s, %d)	=	%d\n",		s1,s3,n, ft_strncmp(	s1,	s3, n));
	printf("=======================================================================\n");
	printf("strncmp(%s,%s, %d) 	=	%d\n",			s1,s4,n, strncmp(		s1,	s4, n));
	printf("ft_strncmp(%s, %s, %d)	=	%d\n",		s1,s4,n, ft_strncmp(	s1,	s4, n));
	printf("=======================================================================\n");
	printf("strncmp(%s,%s, %d) 		=	%d\n",		s1,s5,n, strncmp(		s1,	s5, n));
	printf("ft_strncmp(%s, %s, %d)		=	%d\n",	s1,s5,n, ft_strncmp(	s1,	s5, n));
	printf("=======================================================================\n");		
	free(s1);
	free(s2);
	free(s3);
	free(s4);
	return (0);
}
