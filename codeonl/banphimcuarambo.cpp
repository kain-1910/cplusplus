#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	vector<char> v;
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); i++){
		if(s[i] != 'B') v.push_back(s[i]);
		else {
			if(!v.empty()){
				v.pop_back();
			}
		}
	}
	for(auto x:v) cout << x;
}   
