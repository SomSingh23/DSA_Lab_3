#include <bits/stdc++.h>
using namespace std;
bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' or s[i]=='{' or s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(st.empty()) return false;
                else if(st.top()=='(' and  s[i]!=')') return false;
                else if(st.top()=='{' and  s[i]!='}') return false;
                else if(st.top()=='[' and  s[i]!=']') return false;
                else st.pop();
            }
        }
        if(st.size()>0) return false;
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