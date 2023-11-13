#include <stdio.h>

int plus (int) ;
int product (int) ;
int recur_of_sum (int ) ;

int main()
{
    printf("%d \n", plus(4));
    printf("%d \n", product(5));
	
	recur_of_sum(4) ;

    return 0;
}

int product (int i){
	if ( i == 0 ){
		return 1 ;
	}
	else{
		return i * product(i - 1) ;
	}
}

int plus (int i){
	if ( i == 0){
		return 0 ;
	}
	else
    	return i + plus(i - 1) ;
}

int recur_of_sum (int i){
	static int sum = 0 ;
	printf("		Before level : %d %d \n", i , sum );
	if ( i > 0){
		sum = sum + i ;
		recur_of_sum (i - 1);
	}
	printf("		After  level : %d %d \n", i , sum );
	
}
