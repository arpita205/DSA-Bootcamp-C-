#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int>pq;
    pq.push(15);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout<< pq.top() << endl; // prints 15 the largest element in the queue
    pq.pop(); // removes the largest element 15
    cout<< pq.top() << endl; // prints 10 the next largest element in the queue
    
    //Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(15);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);
    cout<< pq.top() << endl; // prints 2 the smallest element in the queue
}