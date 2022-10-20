#include<bits/stdc++.h>
using namespace std;
bool Check(string s) {
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1') cnt++;
    }
    if(cnt % 2 == 0) return true;
    else return false;
}
int main() {
    string s;
    cin >> s;
    if(Check(s)) cout << s + '0';
    else cout << s + '1';
    return 0;
}