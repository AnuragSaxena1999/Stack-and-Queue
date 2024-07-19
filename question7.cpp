// insert an element  at bottom of the stack

#include<bits/stdc++.h>
using namespace std;
void solve(stack<int> &st , int x){
    if(st.empty()){
        st.push(x);
        return;
    }
    int ans= st.top();
    st.pop();
    solve(st , x);
    st.push(ans);
}
int main(){
stack<int> st;

st.push(9);
st.push(8);
st.push(7);

int x = 6;

solve(st , x);

st.pop();
st.pop();
st.pop();

cout<<st.top();
return 0;
}