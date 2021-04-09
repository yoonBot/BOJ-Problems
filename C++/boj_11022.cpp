#include <iostream>
#define MAX 100
using namespace std;

int main(){
    int test, a[MAX], b[MAX];
    cin >> test;
    
    for (int i = 1; i <= test; i++) cin >> a[i] >> b[i];
    for (int i = 1; i <= test; i++) cout << "Case #" << i << ": " << a[i] << " + " << b[i] << " = " << a[i] + b[i] << endl;
    
    return 0;
}
