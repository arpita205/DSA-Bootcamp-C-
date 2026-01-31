#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    s.insert(1);
    s.emplace(2);
    s.insert(2); // no effect as 2 is already present in the set
    s.insert(4);
    s.insert(3);

    auto it = s.find(3); // returns an iterator to the element 3
    auto it = s.find(5); 

    s.erase(2); 

    int count = s.count(2); // returns 0 as 2 is not present in the set
    
    auto it = s.lower_bound(3);// returns iterator to 3
    auto it = s.upper_bound(3);// returns iterator to 4
}