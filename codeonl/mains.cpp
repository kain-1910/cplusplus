#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int cnt1 = s1.size();
    int cnt2 = s2.size();
    int cnt3 = s3.size();
    int i = 0, j = 0, k = 0;
    while(true){
        if(cnt1 > 1){
            cnt1--;
            if(s1[i] == 'a'){
                i++;
                continue;
            }
        }
        if(cnt2 > 1){
            cnt2--;
            if(s2[j] == 'b'){
                j++;
                continue;
            }
        }
        if(cnt3 > 1){
            cnt3--;
            if(s3[k] == 'c'){
                k++;
                continue;
            }
        }

        if(cnt1 == 1){
            cout << 'A';
            break;
        }
        else if(cnt2 == 1){
            cout << 'B';
            break;
        }
        else if(cnt3 == 1){
            cout << 'C';
            break;
        }
    }
	return 0;
}