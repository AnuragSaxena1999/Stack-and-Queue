// stack implementation without using STL
#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
        // properties
        int *arr;
        int index;
        int size;


        // behaiviour
        Stack(int size){
            this -> size = size;
            arr = new int[size];
            index = -1;
        }
        void push(int element){
            if(size - index > 1){
                index++;
                arr[index] = element;
            }
            else{
                cout<<"stack overflow";
            }

        }
        void pop(){
            if(index>=0){
                index--;
            }
            else{
                cout<<"Stack underflow";
            }
        }
        int top(){
            if(index>=0){
                return arr[index];
            }
            else{
                cout<<"stack is empty";
                return -1;
            }

        }
        bool empty(){
            if(index==-1){
                return true;
            }else{
                return false;
            }

        }
};
int main(){
Stack st(5);

st.push(3);
st.push(4);
st.push(5);
st.push(6);
st.push(7);
st.push(8);

cout<<st.top();

st.pop();
cout<<st.top();
if(st.empty()){
    cout<<"stack is empty";
}else{
    cout<<"Stack is not empty";
}
return 0;
}