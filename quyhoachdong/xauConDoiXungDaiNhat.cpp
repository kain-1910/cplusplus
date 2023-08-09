#include<bits/stdc++.h>
using namespace std;
//tìm xâu con đối xứng dài nhất
// xét F[i][j] là xâu con bắt đầu từ i và kết thúc ở j
// nếu s[i] != s[j] --> F[i][j] = false
// nếu s[i] == s[j] && F[i+1][j-1] == true -->F[i][j] = true
int main() {
    string s;
    // cout << "Nhap chuoi: ";
    // cin.ignore();
    cin >> s;
    int n = s.size();  // chiều dài của chuỗi
    s = 'x' + s; // vì mình xét bắt đầu từ chỉ số 1
    bool F[n+1][n+1];
    memset(F, false, sizeof(F));
    // xét giá trị cho các xâu con có độ dài = 1
    for(int i = 1; i <= n; i++) F[i][i] = true;
    int m = 1;  // lưu độ dài lớn nhất
    // xét các xâu con có độ dài từ 2 đến n
    for(int len = 2; len <= n; len++) {  // xét từng mốc độ dài
        for(int i = 1; i <= n - len + 1; i++) {  // chỉ số bắt đầu
            int j = i + len - 1;  // chỉ số kết thúc
            if(len == 2 && s[i] == s[j]) F[i][j] = true;
            else F[i][j] = F[i+1][j-1] && (s[i] == s[j]);
            if(F[i][j]) m = max(m, len);
        }       

    }
    cout << m << endl;
    return 0;
}