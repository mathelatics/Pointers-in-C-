# include <stdio.h>
#include <conio.h>	

#include "main_02.h"

int main()
{
    input_data();

	printf("Address of node = %p\n",&p);
	printf("Address of member variable a = %p\n", &(p.a));
	printf("Address of member variable b = %p\n", &(p.b));

    ptr_var();
	return 0;
}
