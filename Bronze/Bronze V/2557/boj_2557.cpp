
// C언어

#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d", a + b);
    return 0;
}

// C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    cout << a + b << "\n";
    return 0;
}

// Python 3

a, b = input().split()
print(int(a) + int(b))

// Swift

let str = readLine()!
var sum = 0
let arr = str.split(separator: " ")
for i in arr {
	sum += Int(i)!
}
print(sum)

