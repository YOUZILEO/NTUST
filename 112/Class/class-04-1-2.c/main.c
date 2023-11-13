#include <stdio.h>

int main()
{
    int x,y ;
    
    for(y = 0 ; y < 5 ; y++){
        for(x = 0 ; x < 9 ; x++){
            if(y == 0 && x == 4){
                printf("*");
            }
            else if((y == 1 && x == 3 ) | (y == 1 && x == 5 )){
                printf("*");
            }
            else if((y == 2 && x == 2 ) | (y == 2 && x == 6 )){
                printf("*");
            }
            else if((y == 3 && x == 1 ) | (y == 3 && x == 7 )){
                printf("*");
            }
            else if(y == 4 ){
                printf("*");
            }
            else{
                printf(" ");
            }
            if ( x == 8){
                	printf("\n");
				}
        }
    }
    
//     int a,b,c ;
//     a = 9 ;
//     b = 17 ;
//     for(y = 0 ; y < a ; y++){
//     	for(x = 0 ; x < b ; x ++){
//     		c = b / 2 ;
//             while(y == 0){
//             	if ( x == c){
//     				printf("*");
// 				}
// 				else{
//                 	printf(" ");
// 					x++;
//             	}
            	
//             	if ( y != 0){
//             		x = 0;
//             		break;
            		
// 				}
// 			}
// 			if (x == (c - y)){
// 				printf("-");
// 			}
// 			else{
//                 printf(" ");
//             }
// 			if (x == (c + y)){
// 				printf("+");
// 			}
// 			else{
//                 printf(" ");
//             }
//             if(y == (a-1)){
//             	printf("*");
// 			}
//             if ( x == (b-1)){
//                 	printf("\n");
// 				}
// 		} 
// //		printf("\n");
        
//     }

    return 0;
}
