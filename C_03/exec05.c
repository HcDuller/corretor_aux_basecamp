/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-camp <hde-camp@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 02:50:06 by hde-camp          #+#    #+#             */
/*   Updated: 2021/04/13 21:48:04 by hde-camp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ex05/ft_strlcat.c"

unsigned int 	strlcat(char *dest, char *src, unsigned int size);

void testValues (char *src,unsigned int size)
{
	char *s1,*s2;
	int o;
	int n;
	s1 = calloc(60, sizeof(char));
	s2 = calloc(60, sizeof(char));
	strcpy(s1, "Dest tem vinte C(20)");
	strcpy(s2, "Dest tem vinte C(20)");	
	o = strlcat(s1, src, size);
    n = ft_strlcat(s2, src, size);
	printf("size:%d=>%d	|	strlcat:	%s\n"	, size,	o,	s1);
    printf("size:%d=>%d	|	usuario:	%s\n\n"	, size,	n,	s2);
	free(s1);
	free(s2);
}
int	main(void)
{
	char *s1;
	s1 = calloc(25, sizeof(char));
	strcpy(s1, "0123456789012345678901234");
	printf("================================EX05===================================\n");
	printf("=======================================================================\n\n");
	testValues(s1,0);
	testValues(s1,5);
	testValues(s1,20);
	testValues(s1,21);
	testValues(s1,22);
	testValues(s1,30);
	testValues(s1,35);
	testValues(s1,40);
	testValues(s1,60);
	printf("================================FIM====================================\n");
	free(s1);	
	return (0);
}
