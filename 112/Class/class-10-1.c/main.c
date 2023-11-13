#include <stdio.h>

int addon(int);

int main()
{
    for (int i = 0 ; i < 5 ; i ++){
        printf("%d " , addon(i));
    }
    

    return 0;
}

int addon(int value){
    static int sum = 0 ;
    sum += value ;
    
    printf("%d " , sum );
    return(sum);
}