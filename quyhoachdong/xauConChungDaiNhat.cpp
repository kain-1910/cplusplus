#include<bits/stdc++.h>
using namespace std;
// tìm xâu con chung dài nhất của 2 xâu
// F[i][j] --> độ dài xâu con khi so sánh i kí tự của xâu 1 với
//  j kí tự xâu 2
// x[i] == y[j] --> F[i][j] = F[i-1][j-1] + 1
// x[i] != y[j] --> F[i][j] = max(F[i][j-1], F[i-1][j])
int main() {
    cout << "Nhap 2 chuoi: " << endl;
    string X, Y;
    cin >> X >> Y;
    int n = X.size();
    int m = Y.size();
    X = 'x' + X;
    Y = 'x' + Y;
    int F[n+1][m+1];
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= m; j++) {
            if(i == 0 || j == 0) F[i][j] = 0;
            else {
                if(X[i-1] == Y[j-1]) F[i][j] = F[i-1][j-1] + 1;
                else F[i][j] = max(F[i][j-1], F[i-1][j]);
            }
        }
    }
    cout << F[n][m] << endl;
    return 0;
}