#include <stdio.h>

int main()
{
    int count=0;
    
    for(int i = 0 ; i <= 100; i ++){
        if(i/10 == 8){
            count ++;
        }
        if(i%10 == 8){
            count ++;
        }
    }
    printf("%d",count);

    return 0;
}

