#include <bits/stdc++.h>
using namespace std;
int main(){
    // Take the input n
    int n;
    cin>>n;
    // The only "NO SOLUTION" cases
    if(n==2||n==3){
        cout<<"NO SOLUTION\n";
        return 0;
    }
    // First print all the even numbers present in the range [1,n]
    for(int i=2;i<=n;i+=2){
        cout<<i<<" ";
    }
    // And then print all the odd numbers present in the range [1,n]
    for(int i=1;i<=n;i+=2){
        cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}
