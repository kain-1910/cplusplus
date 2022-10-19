#include <bits/stdc++.h>
using namespace std;
#define long long ll
#define unsigned long long ull
#define endl '\n'
// So sieu nguyen to la so khi ta bo mot chu so cua no di thi no van la so nguyen to

bool check(int x){    // Ham kiem tra so nguyen to
	if(x == 2) return true;
	else{
		for(int i = 2; i <= sqrt(x); i++){
			if(x % i == 0) return false;
		}
		return true;
	}
}
int main()
{
	//Công thức: Nếu x la số nguyên tố thì kiểm tra x*10 + i có phải la số nguyen to hay ko 
	// Ta sẽ push các số nguyên tố < 10 vào queue, sau đó dùng công thức tìm các so tiếp theo
	// Số nào <= n thì ta push
	ios::sync_with_stdio();cin.tie(NULL);cout.tie(NULL);
	int n;
	cin >> n;
	queue<int> q;
	for(int i = 2; i < 10 ; i++){    // Ta push các số nguyên tố <= 10
		if(i <= n && check(i)) q.push(i);     // Điều kiện i <= n để khi n <= 10
	}
	while(!q.empty()){
		for(int i = 1; i <= 9; i++){
			int k = q.front()*10 + i;    // Tìm các số siêu nguyên tố
			if(k <= n && check(k)) q.push(k);
		}
		cout << q.front() << " ";
		q.pop();
	}
	return 0;
}
