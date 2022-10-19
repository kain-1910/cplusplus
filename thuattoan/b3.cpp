#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    for(int i = 1; i <= 5; i++) v.push_back(i);
    v[0] = 100;
    for(vector<int> :: iterator it = v.begin(); it != v.end(); it++){
        cout << *it << endl;
    }
    return 0;
}