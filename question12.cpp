//Next Smaller Element

#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> arr){
    vector<int> ans = arr;
    stack<int> st;
    st.push(-1);
    for(int i = arr.size()-1 ; i>=0 ; i--){
        if(arr[i]>st.top()){
            ans[i] = st.top();
            st.push(arr[i]);
        }
        else{
            while(st.top()>=arr[i]){
                st.pop();
            }
            ans[i]= st.top();
            st.push(arr[i]);
        }
    }
    return ans;
}

void print(vector<int> ans){
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ,";
    }
}
int main(){
vector<int> arr = {2 ,1 ,4, 3};
vector<int> ans = solve(arr);
print(ans);

return 0;
}