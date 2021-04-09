#include <iostream>
using namespace std;

int main(){
    int run;
    cin >> run;
    
    for (int i = 1; i <= run; i++){
        for (int j = 1; j <= i + 1; j++)
            cout << "*";
        cout << endl;
    }
    
    return 0;
}
