#include <stdio.h>

void swap_v(int , int );
void swap_a(int *, int *);
void swap_r(int &, int &);

int main()
{
    int a , b ;
    
    a = 3 ;
    b = 5 ;
    
    printf("in main %d %p   %d %p\n", a , &a , b , &b);
    swap_v(a , b);
    printf("in main %d %p   %d %p\n\n", a , &a , b , &b);
    
    
    a = 3 ;
    b = 5 ;
    
    printf("in main %d %p   %d %p\n", a , &a , b , &b);
    swap_a(&a , &b);
    printf("in main %d %p   %d %p\n\n", a , &a , b , &b);
    
    
    a = 3 ;
    b = 5 ;
    
    printf("in main %d %p   %d %p\n", a , &a , b , &b);
    swap_r(a , b);
    printf("in main %d %p   %d %p\n\n", a , &a , b , &b);

    return 0;
}

void swap_v(int x , int y){
	int temp;
	
	temp = x ;
	x = y ;
	y = temp ;
	
	printf("in swap %d %p   %d %p   %d %p \n", x , &x , y , &y , temp , &temp);
}

void swap_a(int *x , int *y){
	int temp;
	
	temp = *x ;
	*x = *y ;
	*y = temp ;
	
	printf("in swap %d %p   %d %p   %d %p \n", *x , &x , *y , &y , temp , &temp);
}

void swap_r(int &x , int &y){
	int temp;
	
	temp = x ;
	x = y ;
	y = temp ;
	
	printf("in swap %d %p   %d %p   %d %p \n", x , &x , y , &y , temp , &temp);
}