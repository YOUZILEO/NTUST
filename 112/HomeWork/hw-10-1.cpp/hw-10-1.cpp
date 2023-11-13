#include <stdio.h>

#define N 4 

int &add_up(int & , int &) ;
int main(){
    int a[] = {1,2,3,4};
    int b[] = {4,3,2,1};
    
    int i ;

    int *sum ;

    sum = &add_up(*a , *b);
    
    for(i = 0 ; i < N ; i ++){
        printf("%d " , *(sum+i));
    }
    printf("\n");

    return 0 ;
}

int &add_up(int &a , int &b){
    int i ;

    static int add_up[N] ;
    
    int *add_ptr = add_up ;

    for(i = 0 ; i < N ; i++){
        add_up[i] = (a+i) + (b-i);
    }
    return (*add_ptr);
}