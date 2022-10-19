#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
bool nt(ll n){
	for(ll i = 2; i <= sqrt(n); i++){
		if(n%i == 0) return false;
	}
	return true;
}
bool PerfectNum(ll x){
	for(int i = 1; i <= 32; i++){
		if(nt(i)){
			ll tmp = (ll) pow(2,i)-1;
			if(nt(tmp)){
				ll hh = tmp*(ll)pow(2,i-1);
				if(hh == x) return true;
			}
		}
	}
	return false;
}
int main() {
	double x = (3+3)/2;
	int a = 3;
	(a == x)?cout << 1:cout << 0;
	return 0;
}