#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int a[], int l, int r, int x) {
    int m = (l+r)/2;
    if(l > r) return false;
    else if(x == a[m]) return true;
    else if(x > a[m]) binarySearch(a, m+1, r, x);
    else binarySearch(a, l, m-1, x);
}

int main() {
    int n;
    cout << "Nhap so luong phan tu: "; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    int x; 
    cout << "Nhap phan tu can tim kiem: "; cin >> x;
    if(binarySearch(a, 0, n-1, x)) cout << "founded";
    else cout << "no found";
    return 0;
}