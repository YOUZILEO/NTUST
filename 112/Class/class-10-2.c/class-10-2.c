#include <stdio.h>

#define N 5  //N = sizeof(array) / sizeof(array[0])

int* add_up (int* , int*);

int main()
{
    int a[] = {1,2,3,4,5};
    int b[] = {1,1,1,1,1};
    
    int* sum ;
    
    int i ;
    
    sum = add_up(a , b);
    
    // int M = sizeof(a) / sizeof(a[0]);
    
    for(i = 0 ; i < N ; i ++){
        printf("%d " , *(sum + i));
    }
    printf("\n");
    
    

    return 0;
}

int* add_up (int* a , int* b){
    int i ;
    
    static int add_up[N] ;
    
    int* add_ptr = add_up ;
    
    for(i = 0 ; i < N ; i ++){
        add_up[i] = a[i] + b[i] ;
    }
    
    for(i = 0 ; i < N ; i ++){
        printf("%d " , *(add_ptr + i));
    }
    printf("\n");
    
    return(add_ptr);
}


