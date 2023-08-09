#include<bits/stdc++.h>
using namespace std;
template<class T>
class Vector {
private:
    int cap, num;
    T *buff;
public:
    Vector() {
        cap = num = 0;
    }

    Vector(int k, T x) {
        cap = num = k;
        buff = new T[k];
        for(int i = 0; i < k; i++) {
            buff[i] = x;
        }
    }

    ~Vector() {
        if(buff) delete[]buff;
    }

    int capacity() {
        return cap;
    }
    int size() {
        return num;
    }
    bool empty() {
        return num==0;
    }
    void pop_back() {
        if(num > 0) num--;
    }
    void extend(int newcap) {
        if(newcap <= cap) return;
        cap = newcap;
        T *newbuff = new T[cap];
        for(int i = 0; i < num; i++) {
            newbuff[i] = buff[i];
        }
        if(buff) delete[]buff;
        buff = newbuff;
    }
    T &back() {
        return buff[num-1];
    }
    void push_back(T x) {
        if(num == cap) extend(cap*2);
        buff[++num] = x;
    }
    void insert(int k, T x) {
        if(num == cap) extend(cap*2);
        for(int i = num-1; i >= k; i--) {
            buff[i+1] = buff[i];
        }
        buff[k] = x;
        num++;
    }
};

int main() {
	Vector<int> x(5, 9);
    for(int i = 0; i < 5; i++) {
        cout << x.back() << " " << endl;
        x.pop_back();
    }
}