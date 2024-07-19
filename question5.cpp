// reverse the string using stack

#include<bits/stdc++.h>
using namespace std;
string reverseString(string &s){
    stack<char> ans;
    for(int i = 0 ; i<s.length();i++){
        ans.push(s[i]);
    }
    string output = "";
    while(!ans.empty()){
        output.push_back(ans.top());
        ans.pop();
    }
    return output;
}
int main(){
string s = "hello";
string ans = reverseString(s);

cout<<ans;

return 0;
}