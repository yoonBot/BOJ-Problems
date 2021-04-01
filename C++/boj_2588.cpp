#include <iostream>
using namespace std;

int main(){
    int mult1, mult2;
    cin >> mult1 >> mult2;
    
    cout << mult1 * (mult2 % 10) << endl;
    cout << mult1 * ((mult2 % 100) / 10) << endl;
    cout << mult1 * ((mult2 % 1000) / 100) << endl;
    cout << mult1 * mult2 << endl;
    
    return 0;
}
