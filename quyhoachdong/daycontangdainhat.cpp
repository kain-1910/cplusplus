#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> res(n,1);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(a[j] < a[i]){
                res[i] = max(res[i], res[j]+1);
            }
        }
    }
    cout << *max_element(res.begin(), res.end());
    return 0;
}