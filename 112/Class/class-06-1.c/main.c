#include <stdlib.h>
#include <stdio.h>
#include <time.h> 

int main()
{
    time_t t ;
	srand((unsigned)time(&t));
    int a[10000], i, j, k, temp, sum = 0 ;
    
    printf("Please input the number of random : ");
    scanf("%d",&k);
    
    a[0] = (rand()%k) + 1 ;
    
    for(i = 1 ; i < k ; i ++){
    	a[i] = (rand()%k) + 1 ;
    	
    	for(j = 0 ; j < i ; j ++){
    		if(a[i] != a[j]){
    			continue;
			}
			else{
				i -= 1 ;
				j = 0 ;
				break ;
			}
		}
	}
	
	printf("\n");
	
	for(i = 0 ; i < k ; i ++){
		printf("%5d ",a[i]);
		if ((i + 1) % 20 == 0){
			printf("\n");
		}
	}
	
	printf("\n-----------------------------------------------------------------------------------------------------------------------\n");
	
	srand(time(NULL));
	for(i = 0 ; i < k ; i ++){
		a[i]=i + 1 ;
	}
	
	for(i = k - 1 ; i > 1 ; i --){
		j = rand()%i ;
		temp = a[j] ;
		a[j] = a[i] ;
		a[i] = temp ;
		
	}
	for(i = 0 ; i < k ; i ++){
		printf("%5d ",a[i]);
		if ((i + 1) % 20 == 0){
			printf("\n");
		}
	}

    return 0;
}

