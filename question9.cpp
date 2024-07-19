// sort the stack

#include<bits/stdc++.h>
using namespace std;
void solve(stack<int> &st){
    if(st.empty()){
        return;
    }
    int ans = st.top();
    st.pop();
    
}

int main(){
stack<int> st;
st.push(20);
st.push(11);
st.push(2);
st.push(113);
st.push(-14);

cout<<"top pr abhi hai:"<<st.top()<<endl;

solve(st);

cout<<"top pr abhi hai:"<<st.top()<<endl;


return 0;
}