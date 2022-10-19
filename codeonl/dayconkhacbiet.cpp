#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(){
    int n;
    cin >> n;
    map<int,int> mp;   // map<gia tri, vi tri xuat hien>
    int pos = 0, res = 0;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        if(mp[x] < pos || mp.find(x) == mp.end()){       // kiem tra xem x co xuat hien trong (pos,i] hay khong
            res = max(res, i-pos);
            mp[x] = i;
        } 
        else{
            pos = mp[x];
            mp[x] = i;
        }
    }
    cout << res;
    return 0;
}