//  QUAY LUI
#include<bits/stdc++.h>
using namespace std;
int n, x[100], k;

void showResult() {
    for(int i = 1; i <= k; i++) {
        cout << x[i];
    }
    cout << endl;
}

void Try(int i) {
    // Max x[i] = n - k + 1
    // Min x[i] = x[i-1] + 1
    for(int j = x[i-1] + 1; j <= n-k+i; j++) { // Duyệt các khả năng của x[i]
        x[i] = j;
        if(i == k) showResult();
        else {
            Try(i+1);
        }
    }
    return 0;
}


int main() {
    cout << "Nhap n va k: ";
    cin >> n >> k;
    Try(1);
    return 0;
}