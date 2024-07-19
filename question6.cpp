//valid parenthesis

#include<bits/stdc++.h>
using namespace std;
bool solve(string str){
    stack<char> p;
    for(int i = 0 ; i<str.size(); i++){
        if(str[i]=='{' || str[i]=='(' || str[i] =='['){
            p.push(str[i]);
        }else{
            if(p.empty()){
                return false;
            }
        
        char c = p.top();
        p.pop();
        if(c=='{' && str[i]!='}' || c=='(' && str[i]!=')' || c=='[' && str[i]!= ']'){
            return false;
        }
        }
    }
    return p.empty();
}
int main(){
string str = "{()}}";
bool ans = solve(str);
cout<<ans;

 
return 0;
}