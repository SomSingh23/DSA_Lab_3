#include <iostream>
#include "3a.h"
using namespace std;
                              Queue object1, object2;
                              void show_size(){
                                 cout<<object1.size()<<endl;
                              }
                              void push(int y)
                              {
                                 object1.Push(y);
                              }
                             int pop()
                              {
                                if(object2.rear!=nullptr and object2.top!=nullptr){  object2.rear = nullptr ; object2.top = nullptr ;}
                               
                                 int x = (object1.rear->data);
                                 node *ptr = object1.top ;
                                 while (ptr->next!=object1.rear)
                                 {
                                    ptr=ptr->next ;
                                    object2.Push(ptr->data);
                                 }
                                 object1.rear = ptr ;
                                 object1.rear->next = nullptr ;
                                 ptr=ptr->next ;
                                 delete ptr ;
                                 return x;
                                 
                             

                              }
                              int top()
                              {
                              while(object2.size()>0)
                                 {
                                    object2.Pop();
                                 }
                                 while(object2.size()>1)
                                 {
                                    object2.Push(object1.front());
                                    object1.Pop();
                                 }
                                 int temp=object1.front();
                                 object2.Push(object1.front());
                                 object1.Pop();
                                 while(object2.size()>0)
                                 {
                                    object1.Push(object2.front());
                                    object2.Pop();
                                 }
                                 return temp;
                              }
                              bool isEmpty()
                              {
                                 if(object1.size()==0)
                                 {
                                    return true;
                                 }
                                 return false;
                              }
                              int main()
                              {
                                 push(1);
                                 push(2);
                                 push(3);
                                 push(4);
                             
                          cout<< pop()<<endl;  cout<< pop()<<endl;  cout<< pop()<<endl;

                               
                                
                                 return 0;
                              }