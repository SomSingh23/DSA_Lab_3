#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
class Queue{
    public:
    int SiZe;
    node *top=nullptr;
    node *rear=nullptr;
    void Push(int x)
    {
        SiZe++;
        node* temp = new node;
        temp->data=x;
        if(rear==nullptr)
        {
            top=temp;
            rear=temp;
            return;
        }
        rear->next=temp;
        rear=temp;
    }
    void Pop()
    {
       if(top==nullptr)
       return ;
       node* temp=top;
       top=top->next;
       if(top==nullptr)
       {
           rear=nullptr;
       }
       SiZe--;
       delete temp;
    }
    int front()
    {
        if(rear==nullptr)
        return -1;

        return top->data;
    }
    int size()
    {
        return SiZe;
    }
};