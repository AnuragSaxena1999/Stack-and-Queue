// largest histogram area;

#include<bits/stdc++.h>
using namespace std;
vector<int> nextIndex(vector<int> arr, int n){
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);
        
        for(int i = n-1; i>=0 ;i--){
            int curr = arr[i];
            while(st.top() != -1 && curr <= arr[st.top()]){
                st.pop();
            }
            ans[i]=st.top();
            st.push(i);
        }
        return ans;
    }
vector<int> prevIndex(vector<int> arr  ,int n){
        stack<int> st;
        st.push(-1);
        vector<int> ans(n);
        
        for(int i = 0; i<n ;i++){
            int curr = arr[i];
            while(st.top() != -1 && curr <= arr[st.top()]){
                st.pop();
            }
            ans[i]=st.top();
            st.push(i);
        }
        return ans;
    }

int largestArea(vector<int> arr , int n){
    vector<int> next(n);
        vector<int> prev(n);
        next = nextIndex(arr ,n);
        prev = prevIndex(arr, n);
        int area = INT_MIN;
        for(int i = 0 ; i<n; i++){
            int l = arr[i];
            if(next[i] == -1){
                next[i]=n;
            }
            int b = next[i]-prev[i]-1;
            int newArea = l*b;
            area = max(area , newArea);
            
        }
     return area;
}
int main(){
vector<int> arr = {2,1,5,6,2,3};
int area = largestArea(arr , 6);
cout<<"largest area is"<<area;

return 0;
}