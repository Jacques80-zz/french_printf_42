#include <stdio.h>
#include <limits.h>
#include "includes/ft_printf.h"
int main (int ac, char **av)
{
	char *str = "blablacar";
	int i = 42;
	char *emotion = "planant!";
	
	(void) ac;
	(void) av;
	printf("True: la vie avec %s est belle et %d\n", str, i);
	ft_printf("Mine :la vie avec %s est belle et %1d\n", str, i);
	printf("True:je joue à un jeu d'avion, c'est %s\n", emotion );
	ft_printf("Mine :je joue à un jeu d'avion, c'est %s\n", emotion );
	ft_printf("42 en romain %B\n104 en romain %B\n le 12/07/1998 en romain %B/%B/%B\n", 42, 104, 12, 07, 1998);
	ft_printf("42 en binaire %b\n104 en binaire%b\n100.000.000 en binaire%b\n", 42, 104, 100000000);
	printf("%d\n", INT_MAX);
	ft_printf("3245 en roomain %B\n", 3245);
	ft_printf("3245 avec apos %'d\n", 3245);
	printf("324500 avec apos %'d\n", 324500);
	printf("32454564 avec apos %4.0d coucou %d\n", 32454564, 124);
	ft_printf("32454564 avec apos %4.0d coucou %d\n", 32454564, 124);
//	ft_itoa_base(42, 2);
	//ft_printf("Romain 17: %R et 42 %R", 17, 42);
	//ft_printf("Binaire 17: %b et 42 %b", 17, 42);
	return (0);
	
}
