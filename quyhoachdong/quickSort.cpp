#include<bits/stdc++.h>
using namespace std;

// chia nhỏ mảng theo phần tử chốt
int partition(int a[], int l, int r) {
    int x = a[r];
    int vtri = l-1;
    for(int i = l; i < r; i++) {
        if(a[i] < x) {
            vtri++;
            swap(a[i], a[vtri]);
        }
    }
    swap(a[vtri+1], a[r]);
    return vtri+1;
}

void quicksort(int a[], int l, int r) {
    if(l >= r) return;
    int pivot = partition(a, l, r);
    quicksort(a, l, pivot-1);
    quicksort(a, pivot+1, r);
}

int main() {
    int n;
    cout << "Nhap phan tu mang: "; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    quicksort(a, 0, n-1);
    for(int x : a) cout << x << " ";
    return 0;
}