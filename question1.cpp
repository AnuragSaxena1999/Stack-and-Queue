#include<bits/stdc++.h>
using namespace std;
int main(){

    //stack data structure
stack<int> s;

//insert an element on the top of the stack
s.push(2);
s.push(3);

// for top element
cout<<s.top();

//delete top most element 
s.pop();

// for check the stack the empty or not
if(s.empty()){
    cout<<"stack is empty";
}
else{
    cout<<"stack is not empty";
}
cout<<s.top();

//size of stack
cout<<s.size();
return 0;
}