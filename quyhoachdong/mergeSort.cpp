#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int r, int m) {
    vector<int> left(a+l, a+m+1);  // các phần tử bên trái
    vector<int> right(a+m+1, a+r+1);  // các phần tử bên phải
    int i = 0, j = 0;

    while(i < left.size() && j < right.size()) {
		if(left[i] <= right[j]){
			a[l] = left[i];       
			l++;
			i++;
		}
		else{
			a[l] = right[j];
			l++;
			j++;
		}
	}
	while(i < left.size()){
		a[l] = left[i];
		l++;
		i++;
	}
	while(j < right.size()){
		a[l] = right[j];
		l++;
		j++;
	}
    
}

void mergeSort(int a[], int l, int r) {
    int m = (l+r)/2;
    if(l > r) return;
    // tách nhỏ mảng ban đầu thành từng phần tử riêng lẻ
    mergeSort(a, l, m);
    mergeSort(a, m+1, r);
    // trộn lại sau khi tách
    merge(a, l, r, m);

}

int main() {
    int n;
    cout << "Nhap so luong phan tu: "; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    mergeSort(a, 0, n-1);
    for(int x : a) cout << x << " ";
    return 0;
}