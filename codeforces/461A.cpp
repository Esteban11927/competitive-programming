#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long int n, l, r, ans = 0;
    cin >> n;
    long long int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    for(int i = 0; i < n; i++){
        ans += arr[i]*(i+2);
    }
    cout << ans - arr[n-1] << '\n';
    return 0;
}