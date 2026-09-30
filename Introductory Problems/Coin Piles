#include<bits/stdc++.h>
using namespace std;
void solve(){
    // Take the number of coins in each pile as input
    long long a,b;
    cin>>a>>b;
    // Total number of coins should be a multiple of 3
    // With a 2nd condition (observation)
    if((a+b)%3==0 && max(a,b)<=2*min(a,b)){
        cout<<"YES"<<endl;
    }
    // If any of the two mentioned conditions are not satisfied then it is not possible
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    // Take the number of test cases as input
    int t;
    cin>>t;
    // Solve for each testcase
    while(t--){
        solve();
    }
    return 0;
}
