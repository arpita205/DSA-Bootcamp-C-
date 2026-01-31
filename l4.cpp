#include<bits/stdc++.h>
using namespace std;
//Write a program that takes an input of age 
//and prints if you are adult or not
int main(){
    int age;
    cout<<"What is Your age: ";
    cin >>age;
    cout<<age<<endl;
    if(age >= 18){
        cout<<"You are an adult"<<endl;
    }
    else{
        cout<<"You are not an adult"<<endl;
    }

    return 0;
}
