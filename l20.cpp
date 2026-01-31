#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> ls;

    ls.push_back(2);//{2}
    ls.emplace_back(4);//{2,4}
    
    ls.push_front(5);//{5,2,4}
    ls.emplace_front(7);//{7,5,2,4}
    for(auto it: ls){
        cout<< it <<" "<<endl;
    }

    //rest functions are same as that of vector
    //begin(), end(), rbegin(), rend(), size(), clear(), insert(), erase() etc.

}