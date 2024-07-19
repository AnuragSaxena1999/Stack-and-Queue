// implement two stack using a single array

#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
        int *arr;
        int index1 ;
        int index2;
        int size;

    Stack(int size){
        this -> size = size;
        arr = new int[size];
        index1 = -1;
        index2 = size;
    }

    void push1(int element){
        if(index2 - index1 > 1){
            index1++;
            arr[index1] = element;
        }else{
            cout<<"Stack Overflow";
        }
    }
    void push2(int element){
        if(index2 - index1 > 1){
            index2--;
            arr[index2] = element;
        }else{
            cout<<"Stack Overflow";
        }
    }
    void pop1(){
        if(index1==-1){
            cout<<"stack underflow";
        }else{
            index1--;
        }
    }
    void pop2(){
        if(index2==size){
            cout<<"stack underflow";
        }else{
            index2++;
        }
    }
    int top1(){
            if(index1>=0){
                return arr[index1];
            }
            else{
                cout<<"stack is empty";
                return -1;
            }

        }
        int top2(){
            if(index2<size){
                return arr[index2];
            }
            else{
                cout<<"stack is empty";
                return -1;
            }

        }
};
int main(){
Stack st(4);

st.push1(3);


cout<<st.top1();

st.push2(7);
st.push2(8);
st.push2(9);

cout<<st.top2();

st.push1(2);

st.pop1();

cout<<st.top1();
return 0;
}