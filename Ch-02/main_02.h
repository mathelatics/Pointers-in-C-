/*-------------------------Chapter-02 : ------------------------*/

int input_data()
{
    int int_var;
    printf("Input the data as integers : \n");
    scanf("%d", &int_var);
    printf("Variable : int_var = %d \n", int_var);
    printf("Address of the variable : int_var = %p \n", &int_var);
    return 0;
}

struct node{   
    int a;     
	int b;
} p;

void ptr_var()
{	
	char c_var;
	int i_var;
	double d_var;
	char *char_ptr;
	int *int_ptr;
	double *double_ptr;
	char_ptr = &c_var;
	int_ptr = &i_var;
	double_ptr = &d_var;
	printf("Size of char pointer = %d value = %u and address = %p\n", sizeof(char_ptr), char_ptr, &char_ptr);
	printf("Size of integer pointer = %d value = %u and address = %p\n", sizeof(int_ptr), int_ptr, &char_ptr);
	printf("Size of double pointer = %d value = %u and address = %p\n", sizeof(double_ptr),double_ptr, &char_ptr);
	getch();

    return;
}

