#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include<malloc.h>

static int uninitstaticglbl;
int uninitglobal;
int glb_uninit;         /* Part of BSS Segment -- global uninitialized variable, at runtime it is inizialzed to zero */
int glb_init = 10;      /* Part of DATA Segment -- global initialized variable */

void main()
{
    Hello_World();
    int v_1= 33;
    int v_2 = 23.0;
    printf("%d \n", add(v_1, v_2));
    printf("%d \n", sub(v_1, v_2));
    printf("%d \n", mult(v_1, v_2));
    printf("%d\n",div_int(v_1, v_2));
    char *p, *b, *nb;
    int *ptr_main = (int*)malloc(sizeof(int));
    printf("Text Segment:\n");
    printf("Address of main: %p\n", main);
    printf("Address of afunc: %p\n",foo);
    printf("Stack Locations:\n");
    foo();
    printf("Data Segment:\n");
    printf("Address of glb_init: %p\n", & glb_init);
    printf("BSS Segment:\n");
    printf("Address of glb_uninit: %p\n", & glb_uninit);
    printf("Heap Segment:\n");
    printf("Address of heap allocated inside main() %p\n",ptr_main);
    return;
	
}