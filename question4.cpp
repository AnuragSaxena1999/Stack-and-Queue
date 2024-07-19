// delete the middle element of stack

#include<bits/stdc++.h>
using namespace std;

void deleteMiddleElement(stack<int> &s , int size, int index){
    if(index == size/2){
        s.pop();
        return;
    }
    int ans = s.top();
    s.pop();
    deleteMiddleElement(s , size , index+1);
    s.push(ans);
}
int main(){
stack<int> s;

s.push(10);
s.push(11);
s.push(12);
s.push(13);
s.push(14);

int size = s.size();
cout<<size<<endl;

int index = 0;

deleteMiddleElement(s , size ,index);

int newsize = s.size();
cout<<newsize<<endl;

return 0;
}