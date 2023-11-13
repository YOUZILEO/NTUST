#include <stdio.h>

#define R 0.5
#define d_h 0.05
#define d_w 0.025


int main()
{
    double h , w ;
    for(h = R ; h > -R ; h -= d_h , printf("\n")){
    	for(w = R ; w > -R ; w -= d_w){
    		printf((h * h + w * w <= R * R) ? "=" : " ");
		}
	}
	
	printf("\n\n\n\n") ;
	
	for(h = R ; h > -R ; h -= d_h , printf("\n")){
    	for(w = R ; w > -R ; w -= d_h){
    		printf((h * h + w * w <= R * R) ? "回" : "口");
		}
	}
    
    return 0;
}
