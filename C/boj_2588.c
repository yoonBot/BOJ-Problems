#include <stdio.h>

int main(){
    int mult1, mult2;
    scanf("%d %d", &mult1, &mult2);
    
    printf("%d\n", mult1 * (mult2 % 10));
    printf("%d\n", mult1 * ((mult2 % 100) / 10));
    printf("%d\n", mult1 * ((mult2 % 1000) / 100));
    printf("%d\n", mult1 * mult2);
    
    return 0;
}
