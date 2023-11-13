#include <stdio.h>

void swap(int *x, int *y ){
    
    int tz ;
    
    tz = *x ;
    *x = *y ;
    *y = tz ;
    
}

int main()
{
    int a ;
    int b ;
    
    printf("請輸入 a 及 b 的值：");
    scanf("%d %d" , &a , &b);
    
    swap(&a , &b);

    printf("a = %d \n", a);
    printf("b = %d \n", b );
    
    return 0;
}


