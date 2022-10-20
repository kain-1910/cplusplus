#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int n;
	do{
		int a[204][204], d = 0;
		int hang, cot, bien;
		cin >> n;
		hang = n-1, cot = n-1; bien = 1;
		while(d <= n/2){
			for(int i = d; i <= cot; i++) a[d][i] = bien;
			for(int i = d+1; i <= hang; i++) a[i][cot] = bien;
			for(int i = cot-1; i >= d; i--) a[hang][i] = bien;
			for(int i = hang - 1; i >d; i--) a[i][d] = bien; 
			d++;
			bien++;
			hang--;
			cot--; 
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
		if(n == 0) return 0;
	}while(n != 0);
}   
