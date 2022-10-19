#include<bits/stdc++.h>
using namespace std;

int main() {
    int x, z;
    cin >> x;
    do{
        cin >> z;
        if(x < z){
            int cnt = 0;
            int res = x, ans = x;
            while(ans <= z){
                ans += res + 1;
                res++;
                cnt++;
                cout << ans << " " << res << endl;
            }
            (x<0 || x == 0)?cout << cnt:cout << cnt+1;
            return 0;
        }
    }while(x >= z);
    return 0;
}