#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long a[n];
    for(int i = 0; i < n; i++){
       cin >> a[i];
    }
    sort(a, a+n);
    long long s1 = a[0] + a[1];
    long long s2 = a[n-1] + a[n-2];
    (abs(s1) > abs(s2))?cout << abs(s1):cout << abs(s2);
    return 0;
}