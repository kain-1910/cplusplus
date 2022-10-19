#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int main() {
	ios::sync_with_stdio(0); cin.tie(); cout.tie();
	ll n;
	cin >> n;
	vector<int> v;
	for(int i = 1; i <= sqrt(n); i++){
		if(n % i == 0) v.push_back(i);
	}
	int res = 0;
	for(auto it : v){
		int x = 1 + log10(it);
		int y = 1 + log10(n/it);
		res = max(x,y);
	}
	cout << res;
	return 0;
}