#include<bits/stdc++.h>
using namespace std;

int min(int num1,int num2){
    if(num1 =< num2) return num1;
    else return num2;
}

int main(){
    int num1 , num2;
    cin>>num1>>num2;
    int mini = min(num1, num2);
    cout<< mini;
    return 0;
}