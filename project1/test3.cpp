#include<bits/stdc++.h>
// #include"DT.cpp"
using namespace std;

template<class T>
class node{
	T elem;
	node *next;
	public:
		node(){
		}
		node(T x,node<T> *N=NULL){
			elem =x;
			next = N;
		}
		void setelem(T x){
			elem =x;
		}
		void setnext(node<T> *N=NULL){
			next = N;
		}
		T &getelem() {
			return elem;
		}
		node<T> *&getnext(){ 
			return next;
		}
};

template <class T>
class DT_iterator{
	node<T> *curr;//con tro tro vao node hien tai
	public:
		DT_iterator(){ curr=NULL;}
		DT_iterator(node<T> *p){ curr=p;}
		node<T> *getcurr(){
			return curr;
		}
		DT_iterator<T> &operator=(DT_iterator<T> p){
			this->curr = p.getcurr();
			return *this;
		}
		bool operator!=(DT_iterator<T> p){
			return curr!=p.getcurr();
		}
		DT_iterator<T> operator++()//++curr
		{
			curr=curr->getnext();
			return curr;//tu dong ep kieu thanh iterator vi co ham tao co doi
		}
		DT_iterator<T> operator++(int)//curr++
		{
			node<T> *temp = curr;
			curr=curr->getnext();
			return temp;
		}
		T &operator*(){ return curr->getelem();
		}
};

template<class T>
class DT{
	node<T> *head,*tail;
	unsigned int num;//so phan tu hien tai trong list -> size
public:
    typedef DT_iterator<T> iterator;
    DT(){ head = tail = nullptr; num=0;}
    DT(int k,T x){
        head=tail=NULL; num=0;
        for(int i=1;i<=k;i++) push_back(x);
    }
    DT_iterator<T> begin(){
        return head;
    }
    DT_iterator<T> end(){
        return NULL;
    }

    unsigned size(){ return num;}
    bool empty(){ return num==0;}
    T &front(){ return head->getelem();	}
    T &back(){ return tail->getelem();	}
    void push_front(T x){
        head = new node<T>(x,head);
        if(num==0) tail = head; 
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
    void Nhap() {
        int bac;
        cout << "Nhap bac cua da thuc: ";
        cin >> bac;
        int cnt = 0;
        while(cnt > bac){
            int x;
            cout << "Nhap a[" << cnt << "]: ";
            cin >> x;
            node<T> *p;
            p->setelem(x);
            this->push_back(p);
            p = p->next;
            cnt++;
        }
    }
    void Xuat() {
        cout << "Da thuc vua nhap la: " << endl;
        node<T> *p = this->head;
        if(p->getelem() != 0) {
            cout << p->getelem();
        }
        int cnt = 1;
        while(p) {
            if(p->getelem() > 0) cout << "+";
            cout << p->getelem() << "*x^" << cnt++;
            p = p->next;
        }
    }
};

int main(){
    DT<int> x;
    x.Nhap();
    x.Xuat();
    return 0
}


