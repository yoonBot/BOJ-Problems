#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int run, a, b;
    cin >> run;
    
    for (int i = 0; i < run; i++){
        cin >> a >> b;
        cout << a + b << "\n";
    }
    
    return 0;
}
