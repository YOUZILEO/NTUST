#include <stdio.h>

void print_string(char* ) ;

int main()
{
    char str[80];
    
    printf("Please input your word : ");
    scanf("%s",str);
    printf("\n");
    
    print_string(str);

    return 0;
}

void print_string(char* str){
    do{
        printf("%c ", *(str++));
    }while(*str != '\0');
}

