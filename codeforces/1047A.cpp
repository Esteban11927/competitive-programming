#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if((n-2)%3 != 0) cout << "1 1 " << n-2 << '\n';
    else if((n-3)%3 != 0) cout << "1 2 " << n-3 << '\n';
    return 0;
}