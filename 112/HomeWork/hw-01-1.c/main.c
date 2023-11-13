#include <stdio.h>



int main()
{
    int a ;
    int b ;
    int tc ;
    
    printf("請輸入 a 及 b 的值：");
    scanf("%d %d" , &a , &b);
    
    tc = a ;
    a = b ;
    b = tc ;

    printf("a = %d \n", a);
    printf("b = %d \n", b );
    
    return 0;
}

