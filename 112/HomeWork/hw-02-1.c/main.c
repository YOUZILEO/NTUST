#include <stdio.h> 

int main(){
	
	for(int i = 32 ; i <= 127 ; i ++){
		// 32,-3,-3 most beautiful
		printf("%-3d %-3c ", i , i );
	}
	
	printf("\n\nNext Question \n\n");
	
	//upper case miner lower case is equal to 32 
	printf("A lower is %c. ", 'A'+32);
	
	printf("\n\nNext Question \n\n");
	
	printf("a upper is %c. ", 'a'-32);
	
	printf("\n\nNext Question \n\n");
	
	char a = '0';
	printf("%d",(int)a-47);
    
    printf("\n\nNext Question \n\n");
    
    int b = 0;
    printf("%c",(char)(b+65));
	
	return 0;
}
