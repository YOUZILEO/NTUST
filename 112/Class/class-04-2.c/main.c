#include <stdio.h>

#define MaxM 9
#define MaxN 7

int main()
{
    int a[MaxM][MaxN] ;
    int (*p)[MaxN] ;
    int i, j;
    
    for(i = 0 ; i < MaxM ; i++){
    	for(j = 0 ; j < MaxN ; j++){
    		a[i][j]=(i+1)*(j+1);
		}
	}
	
	p=a;
	
	for(i = 0 ; i < MaxM ; i ++){
		for(j = 0 ; j < MaxN ; j ++){
			printf("%3d ",*(*(p+i)+j));
			
			printf("%3d ",*(*p+MaxN*i+j));
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i = 0 ; i < MaxM * MaxN ; i ++){
		printf("%3d",*(*p+i)) ;
		
		if ((i + 1) % MaxN == 0){
			printf("\n");
		}
	}

    return 0;
}



