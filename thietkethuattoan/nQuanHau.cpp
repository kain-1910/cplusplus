#include<bits/stdc++.h>
using namespace std;
int n, x[100], cot[100], d1[100], d2[100];

void showResult() {
    for(int i = 0; i < n; i++) {
        cout << "quan co nam o hang thu " << i << "cot thu " << x[i] << endl;
    }
}

void Try(int i) {
    for(int j = 0; j < n; j++) {
        if(cot[j] == 1 && d1[i-j+n] == 1 && d2[i+j-1] == 1){
            x[i] = j;
            cot[j] = d1[i-j+n] = d2[i+j-1] = 0;
            if(i == n-1) showResult();
            else Try(i+1);

            cot[j] = d1[i-j+n] = d2[i+j-1] = 1;
        }
    }
}

int main() {
    cin >> n;
    for(int i = 0; i < 100; i++) {
        cot[i] = d1[i] = d2[i] = 1;
    }
    Try(0);
    return 0;
}