#include<bits/stdc++.h>
// #include "list.cpp"
using namespace std;
template <class T>
class node {
    T elem;
    node *next;
public:
    node();
    node(T x, node<T> *N = NULL){
        elem = x;
        next = N;
    }
    void setelem(T x){
        elem = x;
    }
    void setnext(node<T> *N=NULL) {
        next = N;
    }
    T &getelem() {
        return elem;
    }

    node<T> *&getnext(){ 
        return next;
    }
};
class list_iterator{
	node<T> *curr;//con tro tro vao node hien tai
	public:
		list_iterator(){ curr=NULL;}
		list_iterator(node<T> *p){ curr=p;}
		node<T> *getcurr(){
			return curr;
		}
		slist_iterator<T> &operator=(list_iterator<T> p){
			this->curr = p.getcurr();
			return *this;
		}
		bool operator!=(list_iterator<T> p){
			return curr!=p.getcurr();
		}
		list_iterator<T> operator++()//++curr
		{
			curr=curr->getnext();
			return curr;//tu dong ep kieu thanh iterator vi co ham tao co doi
		}
		list_iterator<T> operator++(int)//curr++
		{
			node<T> *temp = curr;
			curr=curr->getnext();
			return temp;
		}
		T &operator*(){ return curr->getelem();
		}
};

class list {
    node<T> *head, *tail;
    int num;
public:
    typedef list_iterator<T> interator;
    list() {
        head = tail = nullptr;
        num = 0;
    }
    list(int k, T x){
        head= tail = NULL;
        num = 0;
        for(int i = 0; i < k; i++) push_back(x);
    }
    iterator begin() {
        return head;
    }
    iterator end() {
        return tail;
    }
    int size() {
        return num;
    }
    bool empty() {
        return num==0;
    }
    T &front() {
        return head->getelem();
    }
    T &back() {
        return tail->getelem();
    }
    void push_front(T x) {
        head = new node<T>(x, head);
        if(num == 0) tail == head;
        num++;
    }
    void push_back(T x){
        if(num==0) push_front(x);
        else{
            tail->setnext(new node<T>(x,NULL));
            tail = tail->getnext();
            num++;
        }
    }
    void pop_front(){
        if(num==0) return;
        if(num==1) {
            head=tail=NULL;
        }
        else{
            head=head->getnext();
        }
        num--;
    }
    void pop_back(){
        if(num==0) return;
        if(num==1){head=tail=NULL; num--; return;}
        node<T> *p=head;
        while(p->getnext()!=tail) p=p->getnext();
        p->setnext(NULL);
        tail=p;
        num--;
    }
};
class Dathuc{
private:
    int hs, sm;
public: 
    Dathuc(int x){
        hs = x;
    }
    void nhap(Dathuc& a){
        cout << "Nhap he so: ";
        cin >> a.hs;
        cout << "Nhap so mu: ";
        cin >> a.sm;
    }
    void xuat(Dathuc a){
        cout << a.hs << "x^" << a.sm << " ";
    }
};
int main() {
    // int n;
    // cout << "Nhap bac cua da thuc: ";
    // cin >> n;
    // list<Dathuc> l;
    // for(int i = 1; i <= n; i++){
    //     cout << "Nhap don thuc thu " << i << ": ";
    //     l.nhap();
    // }
    // for(auto x : l) {
    //     x.xuat();
    // }
    list l(10, 1);
    for(auto x : l) {
        cout << x << " ";
    }
    return 0;
}