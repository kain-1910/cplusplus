#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    map<string, int> mL, mR;     // tao hai map, mot cai de luu size giay, cai kia de luu trai hay phai
    for(int i = 0; i < n; i++){
        string giay, temp = "";
        cin >> giay;
        for(int j = 1; j < giay.size(); j++){
            temp += giay[j];
        }
        if(giay[0] == 'R'){
            mR[temp]++;
        } // tach lay size giay de cho vao map
        else mL[temp]++;
    }
    int cnt = 0;
    for(auto it : mR){
        cnt += min(it.second, mL[it.first]);
    }
    cout << cnt;
    return 0;
}