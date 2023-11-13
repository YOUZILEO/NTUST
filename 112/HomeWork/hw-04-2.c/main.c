#include <stdio.h>
#include <math.h>

int main() {
    double x = 1.0 ; 
    double result = 1.0 ; 
    double term = 1.0 ;
    // double tolerance = 1e-10 ; 

    for (int i = 1 ; i < 20 ; i++) {
        term *= x / i ; 
        result += term ; 
        if ((exp(1.0)) - result <= ((10^10)^(-1))) {  //term < tolerance
            break ; 
        }
    }

    
    printf("exp(1.0) in math is       %.20f\n", exp(1.0));
    printf("exp(1.0) is approximately %.20f\n", result);

    return 0;
}
