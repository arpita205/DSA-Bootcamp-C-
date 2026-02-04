/*Problem statement
You are given a number 'n'.



Return number of digits in ‘n’.



Example:
Input: 'n' = 123

Output: 3

Explanation:
The 3 digits in ‘123’ are 1, 2 and 3. */
#include<bits/stdc++.h>
using namespace std;

//Method 1
//Time Complexity: O(d) where d is number of digits in n
/*int count(int n){
    int cnt =0;
    while(n>0){
        int last_digit = n % 10;
        cnt = cnt + 1;
        n = n/10;
    }
    return cnt;
}*/

//Method 2
//Time Complexity: O(log10(n))
int count(int n){
    int cnt = (int) log10(n) +1;
    return cnt;
}

int main(){
    int n;
    cin>>n;
    cout<<count(n)<<endl;
    return 0;

}
