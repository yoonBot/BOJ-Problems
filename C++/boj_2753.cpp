#include <iostream>
using namespace std;

int main(){
    int leap;
    cin >> leap;
    
    if ((leap % 4 == 0 && leap % 100 != 0) || leap % 400 == 0) cout << "1" << endl;
    else cout << "0" << endl;
    
    return 0;
}
