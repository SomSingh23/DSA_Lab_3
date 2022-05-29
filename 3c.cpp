#include <bits/stdc++.h>
using namespace std;
bool isValid(string s) {
        stack<char>A;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' or s[i]=='{' or s[i]=='['){
                A.push(s[i]);
            }
            else{
                if(A.empty())
                return false;
                else if(A.top()=='(' and  s[i]!=')') 
                return false;
                else if(A.top()=='{' and  s[i]!='}')
                return false;
                else if(A.top()=='[' and  s[i]!=']')
                return false;
                else A.pop();
            }
        }
        if(A.size()>0) return false;
        return true;
    }
int main()
{
    string S;
    cin>>S;
    bool a=isValid(S);
    if(a==true)
    {
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;

}
