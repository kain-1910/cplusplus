#include<bits/stdc++.h>
#include"node.cpp"
using namespace std;
template <class T>
class slist_iterator{
	node<T> *curr;
	public:
		slist_iterator(){ curr=NULL;}
		slist_iterator(node<T> *p){ curr=p;}
		node<T> *getcurr(){
			return curr;
		}
		slist_iterator<T> &operator=(slist_iterator<T> p){
			this->curr = p.getcurr();
			return *this;
		}
		bool operator!=(slist_iterator<T> p){
			return curr!=p.getcurr();
		}
		slist_iterator<T> operator++()
		{
			curr=curr->getnext();
			return curr;
		}
		slist_iterator<T> operator++(int)
		{
			node<T> *temp = curr;
			curr=curr->getnext();
			return temp;
		}
		T &operator*(){ return curr->getelem();
		}
};

