#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>st;
    st.push(1);//{1}
    st.push(2);//{2,1}
    st.push(3);//{3,2,1}
    st.push(3);//{3,3,2,1}
    st.emplace(5);//{5,3,3,2,1}

    cout<< st.top() <<endl; //5
    st.pop(); //removes the top element 5 , {3,3,2,1}
    
    cout<< st.top() <<endl; //3

    coutst.size()<<endl; //4
    cout<< st.empty() << endl; //0 (false)

    stack<int> st1, st2;
    st1.swap(st2); //swaps stack st1 and st2
}