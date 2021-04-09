#include <iostream>
#define MAX 100
using namespace std;

int main(){
    int run, a[MAX], b[MAX];
    cin >> run;
    
    for (int i = 1; i <= run; i++) cin >> a[i] >> b[i];
    for (int i = 1; i <= run; i++) cout << "Case " << "#" << i << ": " << a[i] + b[i] << endl;
    
    return 0;
}
