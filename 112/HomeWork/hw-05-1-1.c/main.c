#include <stdio.h>

#define MaxM 6
#define MaxN 8

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
			printf("%3d",a[i][j]);
			printf("%3ld bit ",sizeof(a[i][j]));
		}
		printf("\n");
	}
	printf("  sieof a[i][j] = %ld bit \n",sizeof(a[i][j]));
	
	printf("\n");
	
	for(i = 0 ; i < MaxM ; i ++){
		for(j = 0 ; j < MaxN ; j ++){
			printf("%3d",*(*(p+i)+j));
			printf("%3ld bit ",sizeof(*(*(p+i)+j)));
		}
		printf("\n");
	}
	printf("  sieof *(*(p+i)+j)) = %ld bit \n",sizeof(*(*(p+i)+j)));
	
	printf("\n");
	
	for(i = 0 ; i < MaxM ; i ++){
		for(j = 0 ; j < MaxN ; j ++){
		    printf("%3d",*(*p+MaxN*i+j));
		    printf("%3ld bit ",sizeof(*(*p+MaxN*i+j)));
		}
		printf("\n");
	}
	printf("  sieof *(*p+MaxN*i+j)) = %ld bit \n",sizeof(*(*p+MaxN*i+j)));
	
	printf("\n");
	
	for(i = 0 ; i < MaxM * MaxN ; i ++){
		printf("%3d",*(*p+i)) ;
		printf("%3ld bit ",sizeof(*(*p+i)));
		
		if ((i + 1) % MaxN == 0){
			printf("\n");
		}
	}
	printf("  sieof *(*p+i)) = %ld bit \n",sizeof(*(*p+i)));

    return 0;
}



