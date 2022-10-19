#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, s;
    cin >> n >> s;
    long long dem = 0;
    for(int z = 0; z <= s && z <= n; z++){
    	for(int y = 0; y <= s - z && y <= n; y++){
            int x = s - z - y;
            if(( x<= n ) && (x + z + y == s)) dem++;
		}
	}
	cout << dem;
	return 0;
}