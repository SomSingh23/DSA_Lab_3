#include <bits/stdc++.h>
#include "3b.h"
using namespace std ;
                        Stack object1,object2;
                        // this function work same as Push fucntion of stack no change
                        void Push(int k)
                        {
                            object1.push(k);
                        }
                        // this pop function work like queue pop will will pop the first element 
                    int Pop()
                    {
                        while(object1.size() > 1)
                        {
                            object2.push(object1.Top());
                            object1.pop();
                        }
                        int temp=object1.Top();
                        object1.pop();
                        while(object2.size()>0)
                        {
                            object1.push(object2.Top());
                            object2.pop();
                        }
                        return temp;
                    }
                int peek()
                {
                    while(object1.size()>1)
                    {
                        object2.push(object1.Top());
                        object1.pop();
                    }
                    int temp=object1.Top();
                    while(object2.size()>1)
                    {
                        object1.push(object2.Top());
                        object2.pop();
                    }
                    return temp;

                }
                    bool empty()
                    {
                        if(object1.size()>0)
                        {
                        return false;
                        }
                        return true;
                    }
                            int main()
                            {
                                Push(1);
                                Push(2);
                                Push(3);
                                 Push(4);
                                Push(5);
                                cout<<Pop()<<endl;
                                cout<<Pop()<<endl;
                             cout<<Pop()<<endl;
                                cout<<peek()<<endl;
                                return 0;
                            }
