#include <stdio.h>
#define MAX 100

int main(){
    int run, a[MAX], b[MAX];
    scanf("%d", &run);
    
    for (int i = 1; i <= run; i++) scanf("%d %d", &a[i], &b[i]);
    for (int i = 1; i <= run; i++) printf("Case #%d: %d\n", i, a[i] + b[i]);
    
    return 0;
}
