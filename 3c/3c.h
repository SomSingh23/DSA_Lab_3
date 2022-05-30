#include <iostream>
using namespace std ;
class node {
    public:
    char data ;
    node *next ;
};
class Stack{
    public:
    int static count ;

    node *top;
    void push(char x){
        if(count==0){count++;top=nullptr;node *ptr = new node ;
        ptr->data = x;
         ptr->next = top ;
       top = ptr;}
       else {node *ptr = new node ;
        ptr->data = x;
         ptr->next = top ;
       top = ptr;}
    
    }
    void display(){
        node *ptr = top;

        while (ptr!=nullptr)
        {
            cout<<ptr->data<<" "; ptr=ptr->next ;
        }
        cout<<endl;
    }
    char Top(){
        if(top==NULL)return -1;
        else{return top->data;}
    }
    void pop(){
        if(top==nullptr)cout<<"Stack is empty";
        node *ptr = top ;
        top=top->next ;
        ptr->next = nullptr ;
       delete ptr;
      // delete that node;
    }
    int size()
    {
      int s = 0 ;
      node *ptr = top ;
      while(ptr!=nullptr){
          s++;
          ptr=ptr->next;
      }
      return s-1;
    }
 bool empty(){
        if(top==nullptr)return true;
        else return false ;
    }
};
int Stack::count = 0 ;

