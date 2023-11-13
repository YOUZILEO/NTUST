#include <stdio.h>
 
int Recursion_fibonaci(int i){
   if(i == 0)
   {
      return 0;
   }
   if(i == 1)
   {
      return 1;
   }
   else{
        return Recursion_fibonaci(i-1) + Recursion_fibonaci(i-2) ;

   }
}
 
double Recursion_ratio(double i){
   if(i > 1 ){
   		return (double)Recursion_fibonaci(i) / Recursion_fibonaci(i-1) ;
   }
}

int  main()
{
    int i , j , x , y ,z ;
    x = 0 ;
    y = 1 ;
    printf("Please input the number of i : ");
    scanf("%d", &j);
    
    printf("\nIteration \n");
    for (i = 0 ; i < j+1 ; i++){
    	if ( i == x ){
    		printf("%d ", 0);
    		printf("%f \n",0.0);
		}
    	if (i == y ){
    		printf("%d ", 1);
    		printf("%f \n", 1.0);
    	}
    	if ( i > 1 ){
    	    z = x + y ;
    		x = y ;
    		y = z  ;
    		
    		printf("%d ",z);
    		printf("%f \n",(double)z / x);
		}
	}
    
    printf("\nRecursion \n");
    for (i = 0 ; i < j+1 ; i++)
    {
       	printf("%d ", Recursion_fibonaci(i));
       	if(i > 1){
       		
		   }
    	printf("%f \n", Recursion_ratio(i));
    }
    
    return 0;
}



