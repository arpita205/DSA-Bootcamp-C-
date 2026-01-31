//vectors
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v; //creates a empty container
    v.push_back(1); // pushes 1 at the end of the vector
    v.emplace_back(2); // pushes 2 at the end of the vector
    
    vector<pair<int,int>>vec;
    vec.push_back({1,3}); // pushes the pair (1,3) at the end of the vector
    vec.emplace_back(2,4); // pushes the pair (2,4) at the end of the vector
    
    vector<int> v3(5,100); // creates a vector of size 5 with all values initialized to 100
    vector<int> v4(5); // creates a vector of size 5 with all values initialized to 0

    vector<int> v1(1,20);// creates a vector of size 1 with value initialized to 20
    vector<int> v2(v1); // creates a vector v2 which is a copy of vector v1

    vector<int>::iterator it = v.begin();// iterator pointing to the first element of the vector v
    it++; // iterator now points to the second element of the vector v
    cout<< *(it) <<" "<<endl;// prints the second element of the vector v

    it = it+2; // iterator now points to the fourth element of the vector v
    cout<< *(it) <<" "<<endl;

    vector<int>::iterator it2 = v.end(); // iterator pointing to the position after the last element of the vector v
    vector<int>::reverse_iterator it3 = v.rend(); // iterator now moves in reverse pointing to the last element of the vector v
    vector<int>::reverse_iterator it4 = v.rbegin(); // iterator now moves in reverse points to the last element of the vector v which is before 0th index

    cout<<v[0] <<" "<<v.at(0)<<endl;// both statements print the first element of the vector v
    cout<< v.back() << endl; // prints the last element of the vector v
    
    //Method 1
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout<< *(it)<<" "<<endl; // prints all the elements of the vector v

    }
    //Method 2
    for(auto it = v.begin(); it != v.end(); it++){
        cout<<*(it)<<" "<<endl; // prints all the elements of the vector v

    }
    //Method 3
    for(auto it:v){
        cout<<it<<" "<<endl;
    }

    v.erase(v.begin()+1); // erases the second element of the vector v
    v.erase(v.begin()+2, v.begin()+4); // erases elements from index 2 to index 3
    
    //Insert function
    vector<int> v5(2,100);//{100,100}
    v5.insert(v5.begin(), 300); //{300,100,100}
    v5.insert(v5.begin()+1,2, 10); //{300,10,10,100,100}
    
    vector<int> copy(2,50);//{50,50}
    v5.insert(v5.begin(), copy.begin(),copy.end());//{50,50,300,10,10,100,100}
    
    //{10,20}
    cout<< v5.size() << endl; //2
    
    //{10,20}
    v5.pop_back(); //{10} remove the last element 20
    
    //v1 -> {10,20}
    //v2 -> {30,40}
    v1.swap(v2); // now v1 -> {30,40} and v2 -> {10,20}

    v5.clear(); // removes all the elements of the vector v
    
    cout<< v5.empty() << endl;
 
}