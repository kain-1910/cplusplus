#include<bits/stdc++.h>
using namespace std;
// tính tổ hợp chập k của n
// dùng công thức của tam giác pascal
/*
1 1  các tổ hợp của 1: 1C0, 1C1
1 2 1  các tổ hợp của 2: 2C0, 2C1, 2C2 --> 2 = 1+1
1 3 3 1  ....   --> 3 = 1+2
1 4 6 4 1       --> 4 = 1+3, 6 = 3+3
---> công thức pascal: số bên dưới bằng hai số bên trên cộng lại
không tính 2 tổ hợp 0 và chính nó (vd: 2C0, 2C2)
*/
int n, k;
long long a[1005][1005];

void CalToHop() {
    a[1][0] = 1; // --> 1C0
    a[1][1] = 1; // --> 1C1
    for(int i = 2; i <= n; i++) {
        for(int j = 0; j <= i; j++) {
            a[i][j] = a[i-1][j-1] + a[i-1][j];  // công thức quy hoạch động
        }
    } 
}
int main() {
    cout << "Nhap n va k: "; cin >> n >> k;
    CalToHop();
    cout << a[n][k] << endl;  // tổ hợp chập k của n
    return 0;
}