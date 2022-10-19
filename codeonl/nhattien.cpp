#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio();cin.tie(NULL);cout.tie(NULL);
    long long n, k;
    cin >> n >> k;
    long long a[n];
    long long res = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n, greater<int>());
    for(int i = 0; i < k; i++){
        res += a[i];
    }
    cout << res % 1000000009;
    return 0;
}