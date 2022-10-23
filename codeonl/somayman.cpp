#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int cnt = (s[0] - '0') * (s[s.size()-1]-'0');
    string s1 = to_string(cnt);
    int ok = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '4') ok = 1;
    }
    if(s1[s1.size()-1] != '4' && ok == 0) cout << cnt;
    else cout << -1;
    return 0;
}
