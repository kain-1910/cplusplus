#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
int main()
{
    ll h, l;
    cin >> h;
    cin >> l;
    ll a[l], b[l];
    for(int i = 0; i < l; i++){
        cin >> a[i];
    }
    for(int i = 0; i < l; i++){
        cin >> b[i];
    }
    ll res = 0;
    ll pos1 = h, pos2 = 0;
    double tmp = ((h-a[0]) + (1+b[0]))/(2*1.0);
    for(int i = 0; i < l; i++){
        if(h-a[i] <= pos1 || 1+b[i] >= pos2){
        pos1 = h-a[i];
        pos2 = 1+b[i];
        if(pos1 <= (double) tmp)              
            res++;
        if(pos2 >= (double) tmp)
            res++;
        }
    }
    cout << res;
    return 0;
}