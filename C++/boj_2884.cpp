#include <iostream>
using namespace std;

int main(){
    int hr, min;
    cin >> hr >> min;
    
    if (min < 45){
        min = (60 + min - 45) % 60;
        hr -= 1;
        if (hr < 0) hr = 23;
    }
    
    else min -= 45;
    cout << hr << " " << min << endl;
    
    return 0;
}
