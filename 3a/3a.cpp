#include <iostream>
#include "3a.h"
using namespace std;
                              Queue object1, object2;
                              void push(int y)
                              {
                                 object1.Push(y);
                              }
                              int pop()
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
                                 object1.Pop();
                                 while(object2.size()>0)
                                 {
                                    object1.Push(object2.front());
                                    object2.Pop();
                                 }
                                 return temp;
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
                                 cout<<pop()<<endl;
                                 cout<<pop()<<endl;
                               
                                 cout<<top()<<endl;
                                 bool a=isEmpty();
                                 if(a==true)
                                 {
                                    cout<<"empty"<<endl;
                                 }else{
                                    cout<<"NOT empty"<<endl;
                                 }
                                 return 0;
                              }