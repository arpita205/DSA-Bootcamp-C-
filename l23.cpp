#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(1); // queue: {1}
    q.push(2);
    q.emplace(4); // queue: {1,2,4}

    q.back() +=5; // queue: {1,2,9}

    cout<< q.back() << endl; // prints 9
    cout<< q.front() << endl; // prints 1

    q.pop(); // queue: {2,9}

    cout<< q.front() << endl; // prints 2

    //size swap empty same as stack
}