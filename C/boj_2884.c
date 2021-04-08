#include <stdio.h>

int main(){
    int hr, min;
    scanf("%d %d", &hr, &min);
    
    if (min < 45){
        min = (60 + min - 45) % 60;
        hr -= 1;
        if (hr < 0) hr = 23;
    }
   
    else min -= 45;
        
    printf("%d %d\n", hr, min);
    
    return 0;
}
