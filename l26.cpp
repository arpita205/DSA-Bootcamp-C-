#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int> ms;
    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}

    ms.erase(ms.find(1)); // removes only one occurrence of 1 //{1,1}
    cout<< ms.size() << endl; //2

    ms.erase(1); // removes all occurrences of 1 //{}
    
    int count = ms.count(1); // returns the count of occurrences of 1 ==0

    cout<< count << endl;


}
