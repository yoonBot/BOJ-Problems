#include <stdio.h>
#define MAX 100

int main(){
    int a[MAX], b[MAX], test;
    scanf("%d", &test);
    
    for (int i = 0; i < test; i++)
        scanf("%d %d", &a[i], &b[i]);
    for (int i = 0; i < test; i++)
        printf("%d\n", a[i] + b[i]);
          
    return 0;
}
