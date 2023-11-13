#include <stdio.h>

int main()
{
    int binary_number ;
    int decimal_number ;
    
    printf("please input your binary number :");
    scanf("%d",&binary_number);
    
    int bit_one = binary_number / 1000 ;
    int bit_tow = (binary_number - (bit_one*1000))/ 100 ;
    int bit_three = (binary_number - (bit_one*1000) - (bit_tow*100))/ 10 ;
    int bit_four = (binary_number - (bit_one*1000) - (bit_tow*100) - (bit_three*10)) ;
//    printf("%d %d %d %d",bit_one,bit_tow,bit_three,bit_four);
//	decimal_number= (bit_one*(2**4)) + (bit_tow*(2**3)) + (bit_three*(2**1)) +(bit_four*(2**0));
	decimal_number= (bit_one*8) + (bit_tow*4) + (bit_three*2) +(bit_four*1);
	printf("decimal number of %d is %d",binary_number,decimal_number);
	
	printf("\nnext question \n");
	printf("please input your decimal number :");
    scanf("%d",&decimal_number);
    bit_one = (decimal_number / 8 ) % 2 ;
    bit_tow = (decimal_number / 4 ) % 2 ;
    bit_three = (decimal_number / 2 ) % 2 ;
    bit_four = decimal_number % 2 ;
    printf("binary number of %d is %d%d%d%d",decimal_number,bit_one,bit_tow,bit_three,bit_four);

    return 0;
}



