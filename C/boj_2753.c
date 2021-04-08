#include <stdio.h>

int main(){
    int leap;
    scanf("%d", &leap);
    
    if ((leap % 4 == 0 && leap % 100 != 0) || leap % 400 == 0) printf("1\n");
    else printf("0\n");
    
    return 0;
}
