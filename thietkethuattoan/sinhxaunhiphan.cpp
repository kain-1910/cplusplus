//  QUAY LUI
#include<bits/stdc++.h>
using namespace std;
int n, x[100];

void showResult() {
    for(int i = 0; i < n; i++) {
        cout << x[i];
    }
    cout << endl;
}

void Try(int i) {
// Duyệt các khả năng của x[i]
    for(int j = 0; j <= 1; j++) {  // Vì xâu nhị phân chỉ có 0 và 1
        x[i] = j;
        if(i == n-1) {  
            showResult();
        }
        else {
            Try(i + 1);
        }
    }
}


int main() {
    cout << "Nhap n: ";
    cin >> n;
    Try(0);
    return 0;
}