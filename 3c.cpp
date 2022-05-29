#include <bits/stdc++.h>
using namespace std;
bool isValid(string s) {
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
