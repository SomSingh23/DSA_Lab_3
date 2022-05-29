#include <iostream>
using namespace std ;
class node {
    public:
    int data ;
    node *next ;
};
class Stack{
    public:
    int static count ;
    int s ;
    node *top;
    void push(int x){
        if(count==0){count++;top=nullptr;node *ptr = new node ;
        ptr->data = x;
         ptr->next = top ;
       top = ptr;}
       else {node *ptr = new node ;
        ptr->data = x;
         ptr->next = top ;
       top = ptr;}
       s++;
    }
    void display(){
        node *ptr = top;

        while (ptr!=nullptr)
        {
            cout<<ptr->data<<" "; ptr=ptr->next ;
        }
        cout<<endl;
    }
    int Top(){
        if(top==NULL)return -1;
        else{return top->data;}
    }
    void pop(){
        if(top==nullptr)cout<<"Stack is empty";
        node *ptr = top ;
        top=top->next ;
        ptr->next = nullptr ;
       delete ptr;
       s--; // delete that node;
    }
    int size()
    {
       return s;
    }
};
int Stack::count = 0 ;
