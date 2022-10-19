#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio();cin.tie(NULL);cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    cout << k + (k-1)/(n-1);
    return 0;
}