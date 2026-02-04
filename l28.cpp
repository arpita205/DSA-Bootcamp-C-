#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int , int> m;
    map<int, pair<int,int>> m2;
    map< pair<int,int>,int> m3;

    m[1] =2;// inserts the key 1 with value 2 in the map
    m.emplace(2, 3);// inserts the key 2 with value 3 in the map

    m.insert({4, 5});// inserts the key 4 with value 5 in the map
    m3[{5,6}] = 7;// inserts the key (5,6) with value 7 in the map
    m3.insert({{1,2}, 1});
    m3.insert({{3,4}, 2});
    m3.insert({{5,6}, 3});
    for(auto it : m){
        cout<< it.first<<" "<<it.second<<endl;// prints all the key value pairs of the map

    }

    cout<<m[1]<<endl; // prints the value corresponding to key 1
    if(m.count(4) > 0){
        cout<<m.at(4)<<endl; // prints the value corresponding to key 4
    }

    auto it = m.find(4);
    if(it != m.end()){
        cout<< it->first<<" "<< it->second<<endl; // prints the key value pair where key is 4
    }

}