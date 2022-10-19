#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int w[n+1], v[n+1];
    for(int i = 1; i <= n; i++) cin >> w[i] >> v[i];
    int q;
    cin >> q;
    int M;
    while(q--){
        cin >> M;
        int dp[n+1][M+1] = {};
        for(int i = 1; i <= n; i++){       //i là thứ tự đồ vật, j là trọng lượng của túi
            for(int j = 1; j <= M; j++){
                // không lựa chọn đồ vật thứ i vào túi
                dp[i][j] = dp[i-1][j];
                // Có thể đưa đồ vật thứ i vào túi
                if(j >= w[i]){ // Trọng lượng của túi >₫ trọng lượng đồ vật
                    dp[i][j] = max(dp[i][j], dp[i-1][j-w[i]] +v[i]);  // Cập nhật lại giá trị của túi
                }
            }
        }
        cout << dp[n][M] << endl;
    }
    return 0;
}