// redundant brackets

#include <bits/stdc++.h> 
using namespace std;
bool solve(string &s){
    stack<char> p;
    for(int i = 0; i<s.length() ; i++){
        if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
             p.push(s[i]);
        }else{
            if(s[i] == ')'){
                bool reduntant = true;
                
                while(p.top() != '('){
                    char top = p.top();
                    if(top=='+' || top=='-' || top=='*' || top=='/'){
                        reduntant = false;
                    }
                      p.pop();
                    
                    
                }
                if(reduntant==true){
                    return true;
                }
                p.pop();
            }

        }
    }
    return false;
}
int main(){
string s = "(a+(b))";

if(solve(s)){
    cout<<"true";
}
else{
    cout<<"false";
}

    return 0;
}


