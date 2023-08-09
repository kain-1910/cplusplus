#include<bits/stdc++.h>
using namespace std;
// tìm số fibonaci thứ n
int n;
long long a[100];

void fibonaciThuN() {
    a[1] = 0;
    a[2] = 1;
    for(int i = 3; i <= n; i++) {
        a[i] = a[i-1] + a[i-2];
    }
}
int main() {
    cout << "Nhap n: "; cin >> n;
    fibonaciThuN();
    cout << a[n] << endl;
    return 0;
}