#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    map<char, int> mp;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        mp[s[i]]++;
    }
    cout << mp[s[0]]-1;
    return 0;
}