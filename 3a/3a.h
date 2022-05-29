#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
class Queue{
    public:
   
    node *top=nullptr;
    node *rear=nullptr;
    void Push(int x)
    {
       
        node* temp = new node;
        temp->data=x;
        if(rear==nullptr)
        {
            top=temp;
            rear=temp;
            
        }
       else {rear->next=temp;
        rear=temp;}
        rear->next = nullptr ; 
    }
    void Pop()
    {
      node *ptr ;
      ptr=top;
      if(ptr==top and ptr==rear){
          top = nullptr ; rear = nullptr ;
      }
      else {while(ptr->next!=rear){
        ptr=ptr->next;
    }
    top = ptr;
    node *qtr = ptr->next ;
    top->next = nullptr ;
    delete qtr;}
    
    }
    int front()
    {
        if(rear==nullptr)
        return -1;

        return rear->data;
    }
    int size()
    { int x = 0 ;
      node *ptr = top;
      if(ptr==nullptr){return x ;}
      else {
          while(ptr!=nullptr){
              x++;
              ptr=ptr->next;
          }
          return x;
      }
        
    }
};