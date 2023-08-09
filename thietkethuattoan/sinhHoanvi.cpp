#include<bits/stdc++.h>
using namespace std;
int n, x[100];
int used[100];  // mảng kiểm tra đã dùng phần tử hay chưa

void showResult() {
    for(int i = 0; i < n; i++) {
        cout << x[i];
    }
    cout << endl;
}

void Try(int i) {
    for(int j = 0; j < n; j++) {
        if(used[j] == 0){
            x[i] = j;
            used[j] = 1;
            if(i == n-1) showResult();
            else Try(i+1);

            //backtrack
            used[j] = 0;
        }
    }
}

int main() {
    cin >> n;
    memset(used, 0, sizeof(used));      
    Try(0);
    return 0;
}