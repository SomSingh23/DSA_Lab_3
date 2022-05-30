#include <bits/stdc++.h>
using namespace std;
                                                
                                                bool matching_parenthesis(string s) {
                                                stack<char>A;
                                                int c=0;
                                                for(int i=0;i<s.size();i++){
                                                if(s[i]=='('){
                                                A.push(s[i]);
                                                }
                                                else if(s[i]=='*')
                                                c++;
                                                else if(A.empty()) 
                                                return false;
                                                else if(A.top()=='(' && s[i]!=')') 
                                                return false;
                                                else
                                                A.pop();
                                                }
                                                if(c==s.size())
                                                {
                                                    if(c%2==0)
                                                    return true;
                                                    return false;
                                                }else if(A.size()>0 && A.size()!=c ) 
                                                return false;

                                                return true;
                                                }

                                                int main(int argc , char *argv[])
                                                {
                                                    string test_case = argv[1];
                                                    // cout<<"Enter Your String"<<endl;
                                                    // cin>>test_case;
                                                    bool a=matching_parenthesis(test_case);
                                                    if(a==true)
                                                    {
                                                        cout<<"TRUE"<<endl;
                                                    }
                                                    else{
                                                        cout<<"FALSE"<<endl;
                                                    }
                                                    return 0;

                                                }
