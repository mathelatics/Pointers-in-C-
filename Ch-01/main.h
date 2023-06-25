/*-------------------Chapter-01 : Introduction---------------------*/


// Output the as string or numbers
void Hello_World(void)
{
    printf("Hello, Ajeet Kumar Bhardwaj \n");
    printf("%d", 239 + 293);
    // error : printf(90393 + 239 + 293);
    

}

// Addition of Integers
int add(int v_1, int v_2)
{
	return v_1 + v_2;
}

// Substraction of the integers
int sub(int v_1, int v_2)
{
    return v_1 - v_2;
}

// Multiplications of integers

int mult(int v_1, int v_2)
{
    return v_1 * v_2;
}

// division of integers 
int div_int(int v_1, int v_2)
{
    return v_1 / v_2;
}

//

void  foo(void)
{
static int num = 0;       /* stack frame count */
int autovar;        /* automatic variable/Local variable */
int *ptr_foo = (int*)malloc(sizeof(int));
if (++num == 4)           /* Creating four stack frames */
    return; 
printf("Stack frame number %d: address of autovar: %p\n", num, & autovar);
printf("Address of heap allocated inside foo() %p\n",ptr_foo);
foo();                    /* function call */
}