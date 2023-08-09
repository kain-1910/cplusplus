#include<bits/stdc++.h>
using namespace std;
// tìm dãy con có tổng bằng S, nếu có thì in ra 1 không thì in 0
// sử dụng các giá trị đã tính toán trước đó để tính giá trị mới
int main() {
    int n, S;
    cout << "Nhap n va S: "; cin >> n >> S;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int dp[S+1];  // mảng lưu các giá trị tạm thời
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for(int i = 0; i < n; i++) {
        for(int j = S; j >= a[i]; j--) {
            // kiểm tra tổng S có được tạo ra hay không
            if(dp[j - a[i]] == 1) dp[j] = 1;
        }
    }
    cout << dp[S] << endl;
    return 0;
}
