#include<bits/stdc++.h>
using namespace std;
int main(){
    // Take the input
    long long n,x;
    cin>>n>>x;
    // Take the weights of the child as input
    vector<int>weights(n);
    for(int i=0;i<n;i++){
        cin>>weights[i];
    }
    // Sort the weights in ascending order
    sort(weights.begin(),weights.end());
    // Initialize the answer with 0
    int ans=0;
    // Initialize two pointers
    int l=0,r=n-1;
    // Loop until l<r
    while(l<r){
        // If the heaviest remaining child and lightest remaing child can share a gandola, then move both the pointer
        if(weights[l]+weights[r]<=x){
            l++;
            r--;
        }
        // If both of them can't share a gandola then the heavier child must be sent alone
        else{
            r--;
        }
        // In each case it requires one gandola
        ans++;
    }
    // If one child remains at the last and while loop breaks then just increment the answer
    if(l==r){
        ans++;
    }
    // Print the final asnwer
    cout<<ans<<"\n";
    return 0;
}
