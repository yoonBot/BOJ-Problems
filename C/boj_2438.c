#include <stdio.h>

int main(){
    int run;
    scanf("%d", &run);
    
    for (int i = 0; i < run; i++){
        for (int j = 0; j < i + 1; j++)
            printf("*");
        printf("\n");
    }
    
    return 0;
}
