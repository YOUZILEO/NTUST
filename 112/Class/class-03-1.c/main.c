/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{

	int i,j,k ;
	
	for(i = -1 ; i <= 4 ; i++){
		for(j = -1 ; j <= 5 ; j ++){
			if(i+j > 3){
				printf("*");
			}
			if(i+j < 3){
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\nnewline\n");
	for(i = -1 ; i <= 4 ; i++){
		for(j = -1 ; j <= 5 ; j ++){
			if(i+j < 3){
				printf("*");
			}
			if(i+j > 3){
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\nnewline\n");
//	i = j = -1;
//	for(k = 0 ; k <= 24 ; k++ ){
//		
//		i=k;
//		j=k;
//		if(i + j < 3 ){
//			printf("*");
//		}
//		if(i+j > 3){
//			printf(" ");
//		}
//		
//		if(k % 5 == 0){
//			printf("\n");
//		}
//		
//	}
	
	for(i = 0 ; i < 10 ; i ++){
		if (i % 2  != 0){
			if (i == 1 ){
				continue;
			}
			printf("%d",i);
			
		}
	}
	printf("\nnewline\n");
	for(i = 0 ; i < 10 ; i ++){
		if (i % 2  != 0){
			if (i == 1 ){
				continue;
			}
			printf("%d",i);
		}
	}
    return 0;
}
