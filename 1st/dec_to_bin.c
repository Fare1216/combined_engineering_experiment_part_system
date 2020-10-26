#include <stdio.h>

void print_bin(int number){
    if(number != 1){
        print_bin(number/2);
    }
    printf("%d",number%2);
}

int main(void){
    int num;
    
    num = 15;
    
    print_bin(num);
    puts("");
    
    return 0;
}
