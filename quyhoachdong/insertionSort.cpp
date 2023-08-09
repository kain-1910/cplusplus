#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int n) {
    for(int i = 1; i < n; i++) {
        int x = a[i]; // phần tử cần chèn
        int vtri = i-1; // vị trí các phần tử trước x;
        while(vtri >= 0 && x < a[vtri]) {
            a[vtri+1] = a[vtri];
            vtri--; 
        }
        a[vtri+1] = x;
    }
} 

int main() {
    int n;
    cout << "Nhap so luong phan tu: "; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    insertionSort(a, n);
    for(int x : a) cout << x << " ";
}