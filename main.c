#include "ft_printf.h"
int main()
{
	char c = 'b';
	ft_printf("jawaher %c %s %d %i %x %X %p \n", 'z', "jiji", 123 , 3333, 3333, 3333, &c);
}
