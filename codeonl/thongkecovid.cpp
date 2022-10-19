#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    ll n;
    cin >> n;
    vector<ll> v;
    while(n--){
        ll a;
        cin >> a;
        v.push_back(a);
    }
    ll k;
    cin >> k;
    while(k--){
        ll x;
        cin >> x;
        v.push_back(x);
        sort(v.begin(), v.end(),greater<ll>());
        ll cnt = 1;
        for(auto it : v){
            if(it != x) cnt++;
            else cout << cnt << endl;
        }
    }
    return 0;
}