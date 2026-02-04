#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2); // duplicate values are not stored
    s.emplace(3);
    for(auto it:s){
        cout<< it <<" ";
    }
    cout<< endl;
    cout<< s.size() << endl;
    cout<< s.count(3) << endl; // returns 1 if 3 is present else returns 0

}