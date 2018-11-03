#include "include/fpf_printf.h"
# include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
	setlocale(LC_ALL, "");
	
	//conv d -i-D all_02 all_05
	printf("Conv d-i-D:\n");
	printf("all_02: %%00+10.4d");
printf("\nall_02, mine\n");
ft_printf("%00+10.4d", 0);
printf("\nall_02, true\n");
printf("%00+10.4d", 0);
printf("\n");
printf("toto%%.0d et %%+.i et  %%   .0D !!!");
printf("\nall_05, mine\n");
ft_printf("toto%.0d et %+.i et  %   .0D !!!", 0, 0, 0);
printf("\nall_05, true\n");
printf("toto%.0d et %+.i et  %   .0D !!!", 0, 0, 0);
printf("\n");
printf("\n");

	//conv o -O all_02 all_04
	printf("\nConv o-O:\n");
printf("\nall_02, mine\n");
ft_printf("t%04.2o%#2oet %#-8.3o titi", 0, 0, 0);
printf("\nall_02, true\n");
printf("t%04.2o%#2oet %#-8.3o titi", 0, 0, 0);
printf("\n");
printf("\nall_04, mine\n");
ft_printf("test%#.4o et %02o %0#14.0o!!", 012, 036, 12587499);
printf("\nall_04, true\n");
printf("test%#.4o et %02o %0#14.0o!!", 012, 036, 12587499);
printf("\n");
printf("\n");

	// conv x-X all_04 all_07 all_08 all_09
printf("\nConv x-X:");
printf("\nall_04, mine\n");
ft_printf("cc%#.4X et %#0012x %#04hX !!", 0xaef, 0xe, (unsigned short)0);
printf("\nall_04, true\n");
printf("cc%#.4X et %#0012x %#04hX !!", 0xaef, 0xe, (unsigned short)0);
printf("\n");

printf("\nall_07, mine\n");
ft_printf("toto %##.0xet %#.X%###.1x", 0, 0, 0);
printf("\nall_07, true\n");
printf("toto %##.0xet %#.X%###.1x", 0, 0, 0);
printf("\n");

printf("\nall_08, mine\n");
 ft_printf("%0#10.0x %0#x", 12345, 0);
printf("\nall_08, true\n");
 printf("%0#10.0x %0#x", 12345, 0);
printf("\n");

printf("\nall_09, mine\n");
ft_printf("%0#10.0x", 0);
printf("\nall_09, true\n");
printf("%0#10.0x", 0);
printf("\n");
printf("\n");
	// conv c all_01

printf("\nConv c:\n");
printf("\nall_01, mine\n");
ft_printf("hello ca%----4c %1c va %10c%-c ??", '\0', '\n', (char)564, 0);
printf("\nall_01, true\n");
printf("hello ca%----4c %1c va %10c%-c ??", '\0', '\n', (char)564, 0);

	// conv s prec_04 all_01 all_02

printf("\nConv s:\n");
printf("\npre_04, mine\n");
ft_printf("%.s", "coco");
printf("\npre_04, true\n");
printf("%.s", "coco");

printf("\nall_01, mine\n");
ft_printf("Coucou %.0s\n%s%---12s", "hi", "coco", NULL);
printf("\nall_01, true\n");
ft_printf("Coucou %.0s\n%s%---12s", "hi", "coco", NULL);

printf("\nall_02, mine\n");
ft_printf("u%4.2ss %-1.s\n %---5.3s ", "coco", NULL, "yooo");
printf("\nall_02, true\n");
printf("u%4.2ss %-1.s\n %---5.3s ", "coco", NULL, "yooo");


	// all mixed test_02 test_03 test_04
printf("\nall mixed:\n");

printf("\ntest_02, mine\n");
ft_printf("%--.4u et %#O%#012O%1lc\n", -12, 0, 0, 95);
printf("\ntest_02, true\n");
printf("%--.4u et %#O%#012O%1lc\n", -12, 0, 0, 95);


printf("\ntest_03, mine\n");
ft_printf("%-+-12.7Dt%0 4i %04.2% et %lc titi", 125, 124, 256);
printf("\ntest_03, true\n");
printf("%-+-12.7Dt%0 4i %04.2% et %lc titi", 125, 124, 256);

printf("\ntest_04, mine\n");
ft_printf("test%-8p %---32p %#5.3x%#024X", &ret, &ret, 0x25, 0);
printf("\ntest_04, true\n");
printf("test%-8p %---32p %#5.3x%#024X", &ret, &ret, 0x25, 0);
	//conv C

	// conv S



	return 0;
}