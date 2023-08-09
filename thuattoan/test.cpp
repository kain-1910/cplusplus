#include<bits/stdc++.h>
using namespace std;

int parition(int a[], int l, int r) {
	int x = a[r];
	int vtri = l-1;
	for(int i = l; i < r; i++) {
		if(a[i] < x) {
			vtri++;
			swap(a[i], a[vtri]);
		}
	}
	swap(a[vtri+1], a[r]);
	return vtri;
}

void QuickSort(int a[], int l, int r) {
	if(l >= r) return;
	int pivot = parition(a, l, r);
	QuickSort(a,l, pivot-1);
	QuickSort(a,pivot+1, r);
}


void merge(int a[], int l, int r, int m){     // tron hai mang con
	vector<int> x(a+l, a+m+1);        // copy mang con ben trai
	vector<int> y(a+m+1, a+r+1);      // copy mang con ben phai
	int i = 0, j = 0;
	while(i < x.size() && j < y.size()){
		if(x[i] <= y[j]){
			a[l] = x[i];       // gan lai cho mang ban dau
			l++;
			i++;
		}
		else{
			a[l] = y[j];
			l++;
			j++;
		}
	}
	while(i < x.size()){
		a[l] = x[i];
		l++;
		i++;
	}
	while(j < y.size()){
		a[l] = y[j];
		l++;
		j++;
	}
}

void MergeSort(int a[], int l, int r) {
	if(l >= r) return;
	int m = (l+r)/2;
	MergeSort(a, l, m);
	MergeSort(a, m+1, r); 
	merge(a, l, r, m);
}

int main() {
	int n;
	cout << "Nhap so luong: ";
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	// Bubble sort
	// for(int i = 0; i < n; i++) {
	// 	for(int j = 0; j < n-i; j++){
	// 		if(a[j] > a[j+1]) swap(a[j], a[j+1]);
	// 	}
	// }

	// Selection sort

	// for(int i = 0; i < n-1; i++) {
	// 	int min = i;
	// 	for(int j = i+1; j < n; j++) {
	// 		if(a[j] < a[min]) min = j;
	// 	}
	// 	swap(a[min], a[i]);
	// }

	// QuickSort
	// QuickSort(a, 0, n-1);

	// Merge Sort
	MergeSort(a, 0, n-1);
	
	for(int x:a) cout << x << " ";
	return 0;
}