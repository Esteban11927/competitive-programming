#include<iostream>
using namespace std;
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a+b == c+d || a+c == b+d || a+d == c+b || a+b+c == d || a+b+d == c || a+c+d == b || b+c+d == a) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}