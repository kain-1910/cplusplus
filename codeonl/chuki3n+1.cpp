#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio();cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    queue<int> q;
    q.push(n);
    int cnt = 1;
    while (n != 1)
    {
        if(n % 2 != 0){
            n = 3*n + 1;
            cnt++;
            q.push(n);
        }
        else{
            n = (int) n/2;
            cnt++;
            q.push(n);
        }
    }
    cout << cnt << " ";
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}

