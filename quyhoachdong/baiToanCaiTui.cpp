#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong: "; cin >> n;
    int w[n+1]; // mảng lưu khối lượng đồ vật
    int v[n+1]; // mảng lưu giá trị đồ vật
    int M;
    cout << "Nhap khoi luong cai tui: "; cin >> M;
    for(int i = 1; i <= n; i++) cin >> w[i] >> v[i];
    // mảng lưu giá trị tối ưu cho từng mốc khối lượng của túi
    // mặc định các giá trị = 0 khi khối lượng túi = 0
    int dp[n+1][M+1] = {};
    memset(dp, 0, sizeof(dp));
    for(int i = 1; i <= n; i++) {  // duyệt các đồ vật
        for(int j = 1; j <= M; j++) {  // duyệt qua các mốc khối lượng
            // mặc định ban đầu là không thế đưa đồ vật vào túi
            dp[i][j] = dp[i-1][j];
            // cập nhật giá trị nếu có thể đưa đồ vật vào túi
            if(j >= w[i]) {
                dp[i][j] = max(dp[i][j], dp[i-1][j-w[i]] + v[i]);
            }
        }
    }
    cout << dp[n][M] << endl;
    return 0;
}