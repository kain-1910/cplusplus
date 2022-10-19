#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int canSum(int n,int k, int a[]){
    for(int i = 0; i < k; i++){
        if(n == 0) return 1;
        else if(n < 0) return 0;
        return canSum(n-a[i], k, a);
    }
    return 0;
}
int main() {
	int n, k;
	scanf("%d%d", &n, &k);
	int a[k];
	for(int i = 0; i < k; i++) scanf("%d", &a[i]);
    if(canSum(n,k,a) == 1) printf("Yes\n");
    else printf("No\n");
	return 0;
}