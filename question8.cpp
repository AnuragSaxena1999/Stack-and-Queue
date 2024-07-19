//reverse stack using recursion

#include<bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &st , int num){
    if(st.empty()){
        st.push(num);
        return;
    }
    int ans = st.top();
    st.pop();
    insertAtBottom(st, num);
    st.push(ans);
}

void solve(stack<int> &st){
    if(st.empty()){
        return;
    }
    int num = st.top();
    st.pop();
    solve(st);
    insertAtBottom(st , num);
}
int main(){
stack<int> st;
st.push(10);
st.push(11);
st.push(12);
st.push(13);
cout<<"abhi top pr hai:" <<st.top()<<endl;
solve(st);
cout<<"abhi top pr hai:" <<st.top()<<endl;
return 0;
} 