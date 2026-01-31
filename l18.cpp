/*C++ StL divided into four parts
1.Algorithms
2.Containers
3.Functions
4.Iterators
*/
//Pairs
#include<bits/stdc++.h>
using namespace std;

int main(){
    //single pair
    pair<int , int> p ={1,3};
    cout<<p.first<<" "<<p.second<<endl;
    //nested pair
    pair<int, pair<int, int>> p2 ={1,{3,4}}; 
    cout<<p2.first<<" "<<p2.second.second<<" "<<p2.second.first<<endl;

    pair<int, int> arr[] = {{1,2},{2,5},{5,1}};
    cout<<arr[1].second<<endl; //accessing index one of second value

}
