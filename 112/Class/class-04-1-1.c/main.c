#include <stdio.h>

int main()
{
    printf("%ld %ld\n",sizeof(int),sizeof(int*));
    printf("%ld %ld\n",sizeof(char),sizeof(char*));
    printf("%ld %ld\n",sizeof(double),sizeof(double*));
    printf("%ld %ld\n",sizeof(float),sizeof(double*));

    return 0;
}
