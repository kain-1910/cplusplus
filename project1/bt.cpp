#include <bits/stdc++.h>
using namespace std;

class node {
private:
    int hs, sm;
    node *next;
public:
    int getHs() {
        return hs;
    }
    int getSm() {
        return sm;
    }
    node getNext() {
        return next;
    }
    node* initNode(int x, int y) {
        node *p = new node;
        if(x == 0) {
            return NULL;
        }
        else {
            p->hs = x;
            p->sm = y;
            p->next = NULL;
        }
        return p;
    }
};

class DT {
private:
    node *head, *tail;
public:
    DT() {
        head = tail = NULL;
    }
    bool empty() {
        return !this->head;
    }

    void push_back(node *p){
        p->getNext() = this->tail;
        this->head = p;
        if (!this->head)
        {
            this->tail = p;
        }
    }
    
};
int main() {

}