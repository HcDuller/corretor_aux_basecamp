
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "ex04/ft_putnbr_base.c"

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

void call_putnbr(int n, int nbase, char *base)
{

	write(1, "base:", 5);
	ft_putnbr(nbase);
	write(1, "		", 2);
	ft_putnbr_base(n,base);
	write(1, "\n", 1);
}
int	main(void)
{
	//int n;
	int p;

	p = -2147483648;
	write(1,"------------------------------------------------EX04------------------------------------------------\n",101);	
	write(1,"------------------------------------------(n: -2147483648 )-----------------------------------------\n",101);
	write(1,"\n",1);
	call_putnbr(p, 8,"01234567");
	ft_putstr("correto:	-20000000000\n");
	write(1,"\n",1);
	call_putnbr(p, 10,"0123456789");
	ft_putstr("correto:	-2147483648\n");
	write(1,"\n",1);
	call_putnbr(p, 12,"0123456789ABC");
	ft_putstr("correto:	-4BB2308A8\n");
	write(1,"\n",1);
	call_putnbr(p, 20,"0123456789ABCDEFGHIJ");
	ft_putstr("correto:	-1DB1F928\n");
	write(1,"\n",1);
	call_putnbr(p, 36,"0123456789ABCDEFGHIJKLMNOPQRSTUVXWYZ");	
	ft_putstr("correto:	-ZIK0ZK\n");
	write(1,"\n",1);	
	write(1,"------------------------------------------(n: 2147483647 )------------------------------------------\n",101);
	p = 2147483647;
	write(1,"\n",1);
	call_putnbr(p, 8,"01234567");
	ft_putstr("correto:	17777777777\n");
	write(1,"\n",1);
	call_putnbr(p, 10,"0123456789");
	ft_putstr("correto:	2147483647\n");
	write(1,"\n",1);
	call_putnbr(p, 12,"0123456789ABC");
	ft_putstr("correto:	4BB2308A7\n");
	write(1,"\n",1);
	call_putnbr(p, 20,"0123456789ABCDEFGHIJ");
	ft_putstr("correto:	1DB1F927\n");
	write(1,"\n",1);
	call_putnbr(p, 36,"0123456789ABCDEFGHIJKLMNOPQRSTUVXWYZ");	
	ft_putstr("correto:	ZIK0ZJ\n");
	write(1,"\n",1);
	write(1,"----------------------------------------------------------------------------------------------------\n",101);
	write(1,"Bases Ilegais: (nada deve ser impresso apos a listagem de caracteres entre parenteses)",86);
	write(1,"\n",1);
	call_putnbr(p, 0,"");	
	call_putnbr(p, 1,"0");
	write(1,"(caracteres: \"0\")\n",18);
	call_putnbr(p, 2,"AA");	
	write(1,"(caracteres: \"AA\")\n",19);
	call_putnbr(p, 5,"0123+");	
	write(1,"(caracteres: \"0123+\")\n",22);	
	write(1,"------------------------------------------------FIM-------------------------------------------------\n",101);
	return (0);
}