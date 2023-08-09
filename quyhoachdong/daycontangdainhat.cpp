#include<bits/stdc++.h>
using namespace std;
// tìm dãy con tăng dài nhất (O(n*n)) (không cần là dãy liên tiếp)
// với mỗi bước lưu lại độ dài dãy con tăng dài nhất 
/*
 - với mỗi bước tìm các phần tử nhỏ hơn ở đằng trước
 - chỉ số độ dài ở vị trí hiện tại bằng
chỉ số độ dài lớn nhất của các phần tử nhỏ hơn phần tử hiện tại + 1
*/


int main() {
    int n;
    cout << "Nhap n: "; cin >> n;
    int L[n];  // mảng lưu dộ dài dãy con
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        L[i] = 1;  // khởi tạo tất cả bằng 1
    }

    for(int i = 1; i < n; i++) {
        for(int j = 0; j < i; j++) {
            // tìm các phần tử nhỏ hơn và so sánh chỉ số độ dài
            if(a[j] < a[i]) L[i] = max(L[i], L[j]+1);
        }
    }

    cout << *max_element(L, L+n);
    return 0;
}