#include<bits/stdc++.h>
using namespace std;
int main(){
    // Take the input
    int n;
    cin>>n;
    // We have to generate 2ⁿ binary strings
    for(int i=0;i<(1<<n);i++){
        // Creating gray code representation of i
        int g=i^(i>>1);
        // Printing the n bits of g from left to right
        for(int j=n-1;j>=0;j--){
            cout<<((g>>j)&1);
        }
        cout<<endl;
    }
    return 0;
}
